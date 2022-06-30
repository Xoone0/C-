//练习5-8
//对下列代码进行更改,将分数分布图逆向显示例如目前是100.90-99改为0-9.10-19
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER	80		/* 人数上限 */

int main(void)
{
	int i, j;
	int num;				/* 实际的人数 */
	int tensu[NUMBER];		/* 学生的分数 */
	int bunpu[11] = {0};	/* 分布图 */

	printf("请输入学生人数：");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a 请输入1~%d 的数：", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("请输入%d 人的分数。\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d号：", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("\a请输入1~100 的数：");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

	puts("\n---分布图---");
	printf("      100：");

	for (j = 0; j < bunpu[10]; j++)			/* 100分 */
		putchar('*');
	putchar('\n');

	for (i = 9; i >= 0; i--) {				/* 不到100分 */
		printf("%3d - %3d：", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}

//看了参考答案写的
#define NUMBER	80		/* 人数上限 */
int main()
{
	int dum[NUMBER];
	int num = 0;
	int i = 0,j = 0;
	int sansei[11] = {0};
	printf("请输入学生人数:");
	do
	{
		scanf_s("%d", &num);
		if (num < 0||num>NUMBER)
		{
			printf("请输入1到%d个数:",NUMBER);
		}
	} while (num < 0 || num > NUMBER);
	printf("请输入%d个学生的分数 \n",num);
	for (i = 0; i < num;i++)
	{
		printf("NO.%d:", i + 1);
		do
		{
			scanf_s("%d", &dum[i]);
		}while (dum[i] < 0||dum[i]>100);
		sansei[dum[i] / 10]++;

	}
	printf("---成绩分布图---\n");
	for (i = 0 ; i <= 9; ++i)
	{
		printf("\n\n%4d分-%4d分:", i * 10, i * 10 + 9);
		for (j= 0; j < sansei[i]; j++)
		{
			printf("*");
			printf("\n");

		}
	}
	printf("\n   100分");
	for (i = 0; i < sansei[10]; i++)
	{
		printf("*");
		printf("\n");
	}
	

	return 0;
}

