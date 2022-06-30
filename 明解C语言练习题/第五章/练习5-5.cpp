//练习5-5

//对下列代码进行更改,使用对象宏来定义元素个数.需要注意找到元素交换次数规则
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int x[7];					/* int[7] 数组 */

	for (i = 0; i < 7; i++) {	/* 输入元素的值 */
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 3; i++) {	/* 对数组元素进行倒序排列 */
		int temp = x[i];
		x[i]     = x[6 - i];
		x[6 - i] = temp;
	}

	puts("倒序排列了。");
	for (i = 0; i < 7; i++)		/* 显示元素的值 */
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
//看了参考答案写的
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
		x[NUMBER - 1 - i] = temp;//x[6]的值赋给temp相当于
	}

	puts("倒序排列了。");
	for (i = 0; i < NUMBER; i++)		/* 显示元素的值 */
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}

