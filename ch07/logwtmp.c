/**
 * void logwtmp(const char *line, const char *name, const char *host);
 * logwtmp()会依参数line,name,host所指定的设备名，账号和远程主机等数据，
 * 自动建立一个utmp结构，然后调用updwtmp()来将此记录写入到wtmp文件（/var/log/wtmp）
 *
 * 需要wtmp文件的写入权限。
 *
 * 注意：此函数仅能用在FreeBSD/Solaris等系统下：
 * Not  in  POSIX.1-2001.   Present  on Solaris, NetBSD, and perhaps other
       systems.
 **/

#include <utmp.h>
#include <stdio.h>

void main(){
    logwtmp("pts/2", "kids", "www.gun.org");
}