#include <stdio.h>

int main ()
{
    // 定义了一个变量 a, 值为10
   int a = 10; 
    printf("a = %d\n", a);
    a = 20;
    printf("a = %d\n", a);

    const int b = 5;
    printf("const var b=%d\n", b);
    // note: variable 'b' declared const here
    // b = 20;
    
    printf("const var b=%d\n", b);

    /**
     * 在变量前加 const定义的称为 “常变量”，意思是具有常量属性的变量
     * 其本质上还是一个变量，只是值不能被修改而已
     * int nums[10] 是可以正常定义数组的，编译不会出错，但是如果使用以下则会出错
     * const int x = 10;
     * int nums[x];
     * 虽然x被定义为了常变量，其值不能修改，但是它并不是常量 ，通过以上数组定义可以说明
     * 
     * #define X 10
     * int num[X]; 
     * 上面通过#define定义常量是可以的，通常我们称#define定义的为宏
     * 
     * 枚举常量
     * 
    */
   int nums[10] = {0};

    printf("nums = %d\n", nums);

   return 0;
}