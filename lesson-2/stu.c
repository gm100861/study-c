#include <stdio.h>

struct Stu
{
    char name[20];
    int age;
    char tel[11];
};

void print(struct Stu *p)
{
    printf("%s %d %s\n", (*p).name, (*p).age, (*p).tel);

    // 结构体指针->结构体成员变量名
    printf("%s %d %s\n", p->name, p->age, p->tel);
}

/**
 * 判断给定的年份是不是润年
*/
int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 !=0) || year % 400 == 0) {
        return 1;
    } 
    else {
        return 0;
    }
    
}

int is_prim(int number)
{
    int start = 1;
    for (start = 1; start <= number; start++)
    {
        if (number % start == 0)
        {
            return 0;
        }
        
    }
    return 1;
}

int main()
{
    struct Stu s = {"Honway", 35, "18516090916"};
    printf("%s %d %s\n", s.name, s.age, s.tel);
    print(&s);

    int year = 0;
    for (year = 1000; year <= 2000; year++)
    {
        if (is_leap_year(year))
        {
            printf("%d ", year);
        }
        
    }
    
    int n = 0;
    for (n = 1; n <= 100; n++)
    {
        if (is_prim(n))
        {
            printf("\n%d ", n);
        }
    }
    
    return 0;
}