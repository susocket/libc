/**
 * char *getpass(const char *prompt);
 * getpass()会显示参数prompt所指的字符串，然后从/dev/tty中读取所输入的密码，
 * 若无法从/dev/tty中读取，则会转向从标准输入设备中读取密码。所输入的密码长度
 * 限制在128个字符，包含结束字符NULL，超过长度的字符及换行字符（'\n')将会被
 * 忽略。在输入密码时getpass()会关闭字符回显，并忽略一些信号，如CTRL-C或CTRL-Z
 * 所产生的信号。
 *
 * 返回值：返回一个指向NULL结尾的密码字符串。
 *
 * 附加说明：为了系统安全考虑，一般在使用getpass()输入密码后，该密码最好尽快处理完毕，
 * 然后将该密码字符串清除。
 *
 **/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void main(){
    char passwd[] = "password";
    char *prt;
    prt = getpass("Input Password: ");
    if(!strcmp(prt, "password"))
        printf("Correct!\n");
    else
        printf("Incorrect!\n");
}