//明解C语言练习4-5
/*更改以下程序达到两个功能
1. 从1开始递增而非从0开始
2. 当输入值小于0时,不进行换行*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	i = 0;
	while (i <= no)
		printf("%d ", i++);		/* i的值在显示之后递增 */
	printf("\n");				/* 换行 */

	return 0;
}



//更改后
int main(void)
{
	int i, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	i = 1;
	while (i <= no)
		printf("%d ", i++);
	if (no>=0)
	{
		printf("\n");
	}				

	return 0;
}


//第二种写法
int main(void)
{
	int i, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	i = 0;
	while (i <= no)
		printf("%d ", ++i);
	if (no >= 0)
	{
		printf("\n");
	}

	return 0;
}
