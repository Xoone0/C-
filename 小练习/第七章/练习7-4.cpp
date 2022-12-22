/*编写set函数，返回无符号整数x的第pos位设为1后的值
编写reset函数，返回将无符号整数第pos位设为0后的值
编写inverse函数，返回将无符号整数第pos位取反后的值*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void menu()
{
    printf("*********************************\n");
    printf("*********************************\n");
    printf("********1.    指定位设1   *******\n");
    printf("********2.    指定位设0   *******\n");
    printf("********3.    指定位取反  *******\n");
    printf("********0.    退出程序    *******\n");
    printf("*********************************\n");
    printf("*********************************\n");
    return;
}
size_t Icon(size_t x)
{
    size_t count = 0;
    size_t p = 0;
    while (x)
    {
        if (p=(x & 1u))//逻辑与返回值并不是返回二进制的0，而是将逻辑与比较的位改为0后而生成的值
        {
            count++;
        }
        x >>= 1;
    }
    return count;
}

int Uns_Init()
{
    return Icon(~0u);
}

void print(size_t x)//根据coant返回值来确认输出多少1和0
{
    int i = Uns_Init();
    while(i--)
    {
        putchar(((x >> i) & 1u) ? '1' : '0');
    }
    printf("\n");
}
size_t set(size_t x, int pos)
{
    int i = 1;
    return x | (i << pos);
}

size_t reset(size_t x, int pos)
{
    int i = 0;
    return x & (i << pos);
}

size_t inverse(size_t x, int pos)
{
    int i = 1;
    return x ^ (i << pos);
}
int main()
{
    size_t x = 0;
    int pos = 0;
    size_t ret = 0;
    int i = 0;
    do
    {
        menu();
        scanf("%d", &i);
        switch (i)
        {
        case 1: 
            printf("请输入一个正整数:>\n"); scanf("%u", &x);
            printf("请确认第几位:>\n"); scanf("%d", &pos);
            printf("更改前:>\n"); 
            print(x);
            ret = set(x, pos);
            printf("更改后:>\n");
            print(ret);
            printf("%u\n", ret);
            break;
        case 2:
            printf("请输入一个正整数:>\n"); scanf("%u", &x);
            printf("请确认第几位:>\n"); scanf("%d", &pos);
            printf("更改前:>\n");
            print(x);
            ret = reset(x, pos);
            printf("更改后:>\n");
            print(ret);
            printf("%u\n", ret);
            break;
        case 3:
            printf("请输入一个正整数:>\n"); scanf("%u", &x);
            printf("请确认第几位:>\n"); scanf("%d", &pos);
            printf("更改前:>\n");
            print(x);
            ret = inverse(x, pos);
            printf("更改后:>\n");
            print(ret);
            printf("%u\n", ret);
            break;
        case 0:
            printf("退出程序\n");
            break;
        default:
            printf("输入错误,请重新选择\n");
            break;
        }
    } while (i);
    return 0;
}