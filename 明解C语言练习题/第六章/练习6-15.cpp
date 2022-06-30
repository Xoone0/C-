//明解C语言
//练习6-15
/*创建一个函数put_count输出调用的次数*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
static int i;
void put_count(int a)
{
	static int i;
	for(i = 0; i < a; i++)
	{
		printf("第%d次\n", i+1);
	}
}
int main()
{
	printf("请输入调用函数的次数:");
	scanf("%d",&i);
	put_count(i);
}
//不知道这么输出是否正确满足题意
static int i;
void put_count(int a)
{
	static int i;
	for(i = 0; i < a; i++)
	{
		printf("putc_ount:");
		printf("第%d次",i+1);
		if (i<a)
		{
			printf("\n");
		}
	}
}
int main()
{
	scanf("%d",&i);
	put_count(i);
}