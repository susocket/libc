/**
 * char crypt(const char *key, const char *salt);
 * crypt()将使用Data Encryption Standard(DES)演算法将参数key所指的字符串
 * 加以编码，key字符串长度仅取前8个字符，超过此长度的字符没有意义。
 * 参数salt为两个 * 字符组成的字符串，用来决定使用4096种不同内建表格的哪一个。
 * 函数执行成功后会返回指向编码过得的字符串指针，参数key所指的字符串不会有所更动。
 * 编码过的字符串长度为13个字符，前两个字符为参数salt代表的字符串。
 *
 * 返回值：返回一个指向以NULL结尾的密码字符串。
 *
 * 附加说明：
 * 使用GCC编译时需要加-lcrypt。
 *
 * 表头文件：
 * #define _XOPEN_SOURCE
 * #include <unistd.h>
 *
 **/

#define _XOPEN_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void main(){
    char passwd[13];
    char *key;
    char salt[2];
    key = getpass("Input First Password: ");
    if(strlen(key) < 6){
        printf("The length of password must not less than 6!\n");
        return;
    }
    salt[0] = key[0];
    salt[1] = key[1];
    strcpy(passwd, crypt(key, salt));
    printf("1st Passwd: %s\n", passwd);
    
    key = getpass("Input Second Password: ");
    if(strlen(key) < 6){
        printf("The length of password must not less than 6!\n");
        return;
    }
    salt[0] = key[0];
    salt[1] = key[1];
    printf("2nd Passwd: %s\n", crypt(key, salt));
    
}