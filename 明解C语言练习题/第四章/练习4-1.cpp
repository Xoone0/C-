//明解C语言练习4-1
//将下列代码更改为将输入过程循环任意次
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no == 0)
		puts("该整数为0。");
	else if (no > 0)
		puts("该整数为正数。");
	else
		puts("该整数为负数。");

	return 0;
}
//更改后
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int no;
	int num = 0;
	do
	{
		
		printf("请输入一个整数：");
		scanf("%d", &no);

		if (no == 0)
			puts("该整数为0。");
		else if (no > 0)
			puts("该整数为正数。");
		else
			puts("该整数为负数。");
		printf("是否继续:0(继续)/9(退出)\n");
		scanf("%d", &num);
	} while (num==0);


	return 0;
}