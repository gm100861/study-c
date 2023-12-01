#include <stdio.h>
// #号开头表示是预编译指令
// C语言中有三种预编译指令
// 1 文件包含
// include 是将文件引入到当前文件，相当于是将指定的文件内容直接复制过来
// 后面的<> 尖括号表示是从系统的标准库中加载，也可以 include "cJSON.h" 表示是从当前目录下找cJSON.h文件
// 2. 宏定义
// #define 宏定义
// 3.条件编译 
// #if #elif #ifdef #ifndef #endif
int main()
{
    printf("Hello world\n");
    return 0;
}