//明解C语言
//练习6-13
/*改写代码清单6-16的代码将两次考试分数存储在三维数组中*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//源代码
#include <stdio.h>

/*--- 将4行3列矩阵a和b的和存储在c中 ---*/
void mat_add(const int a[4][3], const int b[4][3], int c[4][3])
{
	int i, j;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
}

/*--- 显示4行3列矩阵m ---*/
void mat_print(const int m[4][3])
{
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}

int main(void)
{
	int tensu1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
	int tensu2[4][3] = { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} };
	int sum[4][3];			/* 总分 */

	mat_add(tensu1, tensu2, sum);				/* 求两次考试中成绩的总和 */

	puts("第一次考试的分数");  mat_print(tensu1);	/* 显示第一次考试的分数 */
	puts("第二次考试的分数");  mat_print(tensu2);	/* 显示第二次考试的分数 */
	puts("总分");        mat_print(sum);		/* 显示总分 */

	return 0;
}
//改动后
#define n 2
#define u 4
#define m 3
void kazi(const int add[n][u][m], int sam[u][m])
{
	int j, l;
	int c = 0;
		for (j = 0; j < 4; j++)
		{
			for (l = 0; l < 3; l++)
			{
				sam[j][l] = add[c][j][l] + add[n-1][j][l];
			}
		}
	}
void puts_a(const int aff[2][4][3])
{
	int i, j, l;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (l = 0; l < 3; l++)
			{
				printf("%4d", aff[i][j][l]);
			}
			printf("\n");
		
		}

	}
}
int main()
{
	int number[n][u][m] = { {{ 91, 63, 78 }, { 67, 72, 46 }, { 89, 34, 53 }, { 32, 54, 34 }},{ {97, 67, 82}, { 73, 43, 46 }, { 97, 56, 21 }, { 85, 46, 35 }} };
	int sum [u][m] = { 0 };//存放总数
	int j, l;
	printf("两次考试分数分别为:\n"); puts_a(number);
	printf("总数为:\n");
	kazi(number, sum);
		for (j = 0; j < 4; j++)
		{
			for (l = 0; l < 3; l++)
			{
				printf("%4d",sum[j][l]);

			}
			printf("\n");
		}
	return 0;
}
/*解题思路*/
/*根据题意,只需要将两个二维数组合并为一个三维数组.所以sum(总数)数组格式无需改变
故,改动只需要以下步骤
1.将函数形参做改动
2.将输出函数内函数体改为三层循环
重点！！
两个函数存于一个三维数组,总数数组并不需要改变所有输出循环无需改成for的三层循环
,并且相加函数kazi着重点在于sam,题目要求的sum中寸的是两个数组的和,那么只需要二
维数组即可.