/**
 * char *initstate(unsigned int seed, char *state, int n);
 * initstate()用来初始化random()函数所使用的数组，参数n为数组大小，
 * 参数seed为初始化用的随机数种子。
 *
 * 返回值：返回调用initstate()前random()所使用的数组。
 *
 * 附加说明：EINVAL 参数state数组大小不足8个字符长。
 *
 **/