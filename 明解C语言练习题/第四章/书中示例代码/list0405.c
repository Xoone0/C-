/*
	�������������ʼ������0
*/

#include <stdio.h>

int main()
{
    int no, num;
    num = 0;

    printf("������һ����������");
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
