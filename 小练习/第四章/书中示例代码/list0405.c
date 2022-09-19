/*
	从输入的整数开始倒数到0
*/

#include <stdio.h>

int main()
{
    int no, num;
    num = 0;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    while (no >= 0)
    {
        printf("%d ", no);
        no--;
        num++;
    }
    if (num != 0)
    {
        printf("\n");
    }
    return 0;
}
