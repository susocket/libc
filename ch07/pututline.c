/**
 * void pututline(struct utmp *ut);
 * pututline()用来将参数ut的utmp结构记录到utmp文件中。
 * 此函数会先用getutid()来取得正确的写入位置，如果没找到相符的记录，则会加入到
 * utmp文件尾。
 *
 **/

