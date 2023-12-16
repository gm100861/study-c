#include <stdio.h>

/**
 *  由双引号引起的一串值称为字符串，如
 * "Hello world"
 * ""
 * "123"
 * 等
*/

int main()
{
    char str[] = "abcd";
    // \0在C语言中表示的是字符串的结束符，如果数组中没有\0，将char数组当字符串使用时会出现一些随机值。
    char str1[] = {'a', 'b', 'c', '\0'};
    printf("%s\n", str);    // abcd
    printf("%s\n", str1);   //abc
    return 0;
}