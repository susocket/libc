/**
 * int setreuid(uid_t ruid, uid_t euid);
 * 设置真实及有效的用户ID。
 * setreuid()用来将参数ruid设为当前进程的真实用户ID，将参数euid设为当前进程
 * 的有效用户ID。如果参数ruid或euid的值为-1，则对应的识别码不会改变。
 *
 **/
