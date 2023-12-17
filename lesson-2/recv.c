#include <stdio.h>

/**
 * 使用递归实现数字挨个打印
 * 输入：12345
 * 屏幕打印：1 2 3 4 5
*/
void print(int number)
{
    if (number > 9)
    {
        print(number / 10);
    }
    printf("%d ", number % 10);
}

int main()
{
    int number = 178;
    print(number);

    return 0;
}