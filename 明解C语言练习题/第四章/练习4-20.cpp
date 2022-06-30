//明解C语言练习4-20
//编写一段程序,具体效果看书中图例
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, l;
	printf(" 1|  2  3  4  5  6  7  8  9 \n");
	printf("----------------------------\n");
	for (i = 1; i < 10; i++)
	{
		printf("%2d |", i);

		for (j = 1; j < 10; j++)
		{
			printf("%3d", i * j);
		}
		putchar('\n');
	}
}
//下列为别人写的,在排版|符号中参考了对方的代码.第一行就看出差距了

int main()
{
    int i, j;

    printf("   |");
    for (int a = 1;a <= 9;a++)
    {
        printf("%3d",a);
    }
    putchar('\n');
    printf("-------------------------------\n");
    for (i = 1;i <= 9;i++)
    {
        printf("%2d |",i);
        for (j = 1;j <= 9;j++)
        {
            printf("%3d",i*j);
        }
        putchar('\n');
    }

    return 0;
}
