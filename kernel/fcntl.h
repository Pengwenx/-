#define O_RDONLY  0x000
#define O_WRONLY  0x001
#define O_RDWR    0x002
#define O_CREATE  0x200
#define O_TRUNC   0x400
// 新的文件标志位,不解析符号链接.如果文件是一个符号链接，则直接打开而不是打开链接所指向的文件
#define O_NOFOLLOW 0x004