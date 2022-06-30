//明解C语言练习3-11
//使用逻辑或编写一段程序,读取输入的两个个值,若两个值相差小于等于10则输出差值小于等于10,否则输出大于等于11
#define _CRT_SECURE_NO_WARNINGS,
#include <stdio.h>
int main()
{
    int a, b;

    printf("请输入一个整数A:");
    scanf_s("%d", &a);
    printf("请输入一个整数B:"); 
    scanf_s("%d", &b);
    if ((a - b) > 0 || (a - b) == 10)
    {
        printf("他们的差值小于等于10");
    }
    else if ((a - b) > 10 || (a - b)>0)
    {
        printf("他们的差值大于等于11");
    }
    else if ((a - b) < 0 || (a - b) == 0)
        printf("他们的差值为负数%d", a - b);
    return 0;
}


/*根据题意使用逻辑或所撰写的代码,还有进步空间
我现在感觉写的已经很垃圾了。。。。