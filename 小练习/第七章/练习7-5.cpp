/*编写set_n函数，返回将无符号整数x的第pos位到第pos+n-1位的n位设为1后的值。
unsigned set_n(unsgnedx,int pos,int n){}
编写reset_n函数，返回将无符号整数x的第pos位开始的n位设置为0后的值
unsigned reset_n(unsgnedx,int pos,int n){}
编写inveres_n函数，返回将无符号整数x的第pos位开始的n位取反后的值
unsigned inverres_n(unsgnedx,int pos,int n){}*/
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
        if (p=(x & 1u))
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

void print(size_t x)
{
    int i = Uns_Init();
    while(i--)
    {
        putchar(((x >> i) & 1u) ? '1' : '0');
    }
    printf("\n");
}
size_t set_n(size_t x, int pos,int n)
{

    int i;
    for (i = 0; i < n - pos; i++) 
    {
        unsigned mask = (1u << (pos + i));
        x = (mask | x);
    }
    return x;
}

size_t reset_n(size_t x, int pos,int n)
{

    int i;
    for (i = 0; i < n - pos; i++) 
    {
        unsigned mask = (1u << (pos + i));
        x = (mask | x);
    }
    return x;
}

size_t inverse_n(size_t x, int pos,int n)
{
    int i;
    unsigned mask = 1u;
    for (i = 0; i < n - pos; i++)
    {
        x = (x ^ (mask << (pos + i)));
    }
    return x;
}
int main()
{
    size_t x = 0;
    int pos = 0;
    size_t ret = 0;
    int i = 0;
    int n = 0;
    do
    {
        menu();
        scanf("%d", &i);
        switch (i)
        {
        case 1: 
            printf("请输入一个正整数:>\n"); scanf("%u", &x);
            printf("请确开始位:>\n"); scanf("%d", &pos);
            printf("请确认结束位:>\n"); scanf("%d", &n);
            printf("更改前:>\n"); 
            print(x);
            ret = set_n(x, pos,n);
            printf("更改后:>\n");
            print(ret);
            printf("%u\n", ret);
            break;
        case 2:
            printf("请输入一个正整数:>\n"); scanf("%u", &x);
            printf("请确开始位:>\n"); scanf("%d", &pos);
            printf("请确认结束位:>\n"); scanf("%d", &n);
            printf("更改前:>\n");
            print(x);
            ret = reset_n(x, pos,n);
            printf("更改后:>\n");
            print(ret);
            printf("%u\n", ret);
            break;
        case 3:
            printf("请输入一个正整数:>\n"); scanf("%u", &x);
            printf("请确开始位:>\n"); scanf("%d", &pos);
            printf("请确认结束位:>\n"); scanf("%d", &n);
            printf("更改前:>\n");
            print(x);
            ret = inverse_n(x, pos,n);
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