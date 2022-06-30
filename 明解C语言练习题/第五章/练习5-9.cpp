//练习5-9
//看书中图例
//下行代码是整体参考过别人的代码思路
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER	80		/* 人数上限 */

#define NUMBER	80		/* 人数上限 */
int main()
{
	int dum[NUMBER];
	int num = 0;
	int i = 0, j = 0;
	int sansei[11] = { 0 };
	printf("请输入学生人数:");
	do
	{
		scanf_s("%d", &num);
		if (num < 0 || num>NUMBER)
		{
			printf("请输入1到%d个数:", NUMBER);
		}
	} while (num < 0 || num > NUMBER);
	printf("请输入%d个学生的分数 \n", num);
	for (i = 0; i < num; i++)
	{
		printf("NO.%d:", i + 1);
		do
		{
			scanf_s("%d", &dum[i]);
		} while (dum[i] < 0 || dum[i]>100);
		sansei[dum[i] / 10]++;

	}
	printf("   -----成绩分布图------\n");
	int x;
	x = sansei[0];
	for (i = 1; i < 11; i++)
	{
		if (x < sansei[i])
			x = sansei[i];
	}
	for (j = x; j > 0; j--)
	{
		for (i = 0; i < 11; i++)
		{
			if (sansei[i] >= j)
				printf(" *  ");
			else
				printf("    ");
		}
		printf("\n");
	}

	printf("-------------------------------------------\n");
	for (i = 0; i <= 100; i += 10)
	{
		printf("%3d", i);
		printf(" ");
	}
	return 0;
}
/*这段代码写了整整快四天,一直不明白怎么写,对着别人的代码分析也总是输出的*号
无法和数值的位置相对应,最后突然想到了.既然无法确认*号的位置,那就主动把数值和它对齐.

//CSDN大佬写的
int main(void)
{
    int i, j, max;
    int num;
    int tensu[NUMBER];
    int bunpu[11] = { 0 };

    printf("请输入学生人数: ");
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("请输入1-%d的数: ", NUMBER);
    } while (num < 1 || num > NUMBER);
    printf("请输入%d人的分数。\n", num);
    for (i = 0; i < num; i++)
    {
        printf("%2d号: ", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 1 || tensu[i] > 100)
                printf("请输入1~100的数: ");
        } while (tensu[i] < 1 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }
    puts("\n---分布图---");
    max = bunpu[0];
    for (i = 1; i < 11; i++)
    {
        if (max < bunpu[i])
            max = bunpu[i];
    }
    for (j = max; j > 0; j--)
    {
        for (i = 0; i < 11; i++)
        {
            if (bunpu[i] >= j)
                printf(" *  ");
            else
                printf("    ");
        }
        putchar('\n');
    }
    putchar('\n');
    printf("---------------------------------------------\n");
    for (j = 0; j <= 100; j += 10)
    {
        printf(" %d ", j);
    }

    return 0;
}
