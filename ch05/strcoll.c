/**
 * int strcoll(const char *s1, const char *s2);
 * strcoll()会依环境变量LC_COLLATE所制定的文字排列次序来比较
 * 参数s1和s2的字符串。
 *
 * 说明：若LC_COLLATE为"POSIX"或"C"，则strcoll()与strcmp()完全相同。
 *
 **/