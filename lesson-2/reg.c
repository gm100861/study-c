#include <stdio.h>

int main ()
{
    // register int a = 10;  // 建议将变量a放到寄存器中，最终由编译器决定该变量的位置
    register int a = 10;  // 建议将变量a放到寄存器中，最终由编译器决定该变量的位置
    printf("%d\n", a);
    printf("%zu", sizeof(char*));
    return 0;
}