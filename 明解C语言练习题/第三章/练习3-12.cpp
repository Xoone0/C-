//明解C语言练习3-12
//将下列代码使用switch更改达到同样效果
#define _CRT_SECURE_NO_WARNINGS,
#include <stdio.h>
int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no % 2)
		puts("该整数是奇数。");
	else
		puts("该整数是偶数。");

	return 0;
}

//更改后
int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	switch (no % 2)
	{
	case 0: printf("该整数是一个偶数"); break;
	case 1:	printf("该整数是奇数。"); break;
	case 2: puts("该整数是偶数。"); break;

	}
			return 0;
}