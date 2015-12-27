/**
 * int initgroups(const char *usr, gid_t group);
 * 用来从组文件(/etc/group)中读取一项组数据，若该组数据的成员中有user时，
 * 便将参数group组识别码加入到此数据中。