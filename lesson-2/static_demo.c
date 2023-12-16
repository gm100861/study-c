#include <stdio.h>


void test()
{
    /**
     * static 修饰局部变量时，修改了变量的存放位置，普通局部变量存在栈区，被static修饰后位置变到了静态区
     * 静态区的变量只会被初始化一次，程序退出时静态变量才会被销毁。
     * 栈区是方法执行完，里面的内容都被释放销毁。
     * 
     * -exec disassemble
     * -exec disassemble -m
    */
    static int a = 1;
    a++;
    printf("%d ", a);
}

int main()
{

    int i = 0;
    while (i < 10)
    {
        i++;
        test();
    }
    
    return 0;
}