//练习5-7
//看书中图例
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER	80		/* 人数上限 */
int main()
{
	int dum[NUMBER];
	int num = 0;
	int i = 0,j = 0;
	printf("请输入数值个数:");
	do
	{
		scanf_s("%d", &num);
		if (num < 0||num>NUMBER)
		{
			printf("请输入1到%d个数:",NUMBER);
		}
	} while (num < 0 || num > NUMBER);
	printf("请输入%d个数\n",num);
	for (i = 0; i < num;i++)
	{
		do
		{
			i++;
			printf("%d号:", i);
			scanf_s("%d", &dum[i - 1]);
		} while (i < num);
	}
	printf("{");
	printf("%d", dum[0]);
	for (i = 1 ; i < num; i++)
	{
		printf(",%d", dum[i]);
	}
	printf("}");
	

	return 0;
}
//最后那部分,{}写不出来去看了参考答案写的
#define NUMBER 7	/* int[7] 数组 */
int main(void)
{
	int i;
	int x[NUMBER];		

	for (i = 0; i < NUMBER; i++) {	/* 输入元素的值 */
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 3; i++) {	/* 对数组元素进行倒序排列 */
		int temp = x[i];  //将x[0]下标的值赋给temp
		x[i] = x[NUMBER - 1 - i];//x[0]=x[7-1-0]
		x[NUMBER - 1 - i] = temp;//x[6]的值赋给temp相当于赋值给了x[0]
	}

	puts("倒序排列了。");
	for (i = 0; i < NUMBER; i++)		/* 显示元素的值 */
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}

//大佬写的是真简洁啊,牛逼