/**
 * void *mmap(void *start, size_t length, int prot, int flags, int fd, off_t offset);
 * mmap()用来将某个文件内容映射到内存中，对该区域的存取及时直接对该文件内容的读写。
 * 参数说明：
 *  start，指向欲对应的内存起始地址，通常设为NULL，代表让系统自动选定地址，对应成功后使用该地址返回；
 *  length，代表将文件中多大部分对应到内存；
 *  prot，代表映射区域的保护方式，有以下组合：
 *      * PROT_EXEC     映射区域可被执行
 *      * PROT_READ     映射区域可读
 *      * PROT_WRITE    映射区域可写
 *      * PROT_NONE     映射区域不能存取
 *  flag，会影响映射区域的各种特性：
 *      * MAP_FIXED     如果参数start所指向的地址无法成功建立映射时，则放弃映射，不对地址做修正。
 *                      通常不鼓励此旗标。
 *      * MAP_SHARED    对映射区域的写入数据会复制回文件内，而且允许其他映射该文件的进程共享。
 *      * MAP_PRIVATE   对映射区域的写入操作会产生一个映射文件的复制，即私人的“写入时复制”（copy-on-write)
 *                      对此区域做的任何修改，都不会写回原来的文件。
 *      * MAP_ANONYMOUS 建立匿名映射。此时会忽略参数fd，不涉及文件，而且映射区域无法和其他进程共享。
 *      * MAP_DENYWRITE 只允许对映射区域的写操作，其他对文件直接写入的操作将会被拒绝。
 *      * MAP_LOCKED    将映射区域锁定，这表示该区域不会被置换（swap）。
 *      在调用mmap()时，必须要指定MAP_SHARED或MAP_PRIVATE。
 *  fd，为open()返回的文件描述符，代表欲映射到内存的文件；
 *  offset，为文件映射的偏移量，通常设置为0，代表从文件的最前方开始映射。offset必须为分页大小的整数倍。
 *
 * 返回值：若映射成功，返回映射区域的内存起始地址，否则返回MAP_FAILED(-1)，并将错误原因存在errno中。
 * 错误代码：
 *  EBADF       参数fd不是有效的文件描述符
 *  EACCESS     存取权限错误，如果是MAP_PRIVATE，则文件必须可读；使用MAP_SHARED，则要有PROT_WRITE以及文件能写；
 *  EINVAL      参数start、length或offset有一不合法性。
 *  EAGAIN      文件被锁住，或是有太多内存被锁住。
 *  ENOMEM      内存不足。
 **/


/* 利用mmap()来读取/etc/passwd文件内容 */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdio.h>

void main(){
    
    int fd;
    void *start;
    struct stat sb;
    fd = open("/etc/passwd", O_RDONLY);
    fstat(fd, &sb);
    start = mmap(NULL, sb.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
    if(start == MAP_FAILED){
        printf("mmap error.\n");
        return;
    }
    printf("%s\n", (char*)start);
    munmap(start, sb.st_size);
    close(fd);
}


