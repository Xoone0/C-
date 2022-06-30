//明解C语言
//练习6-14
/*创建一个double类型数组,为所有元素赋予静态存储,并确认每个元素被初始化为0.0*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void add(void)
{
	int i;
	static double arr[10];
	for (i = 0; i < 11; i++)
	{
		printf("%.1f\n", arr[i]);
	}
}
int main()
{
	add();
}
//第二种写法
static double add[10];
void num(void)
{
	int i;
	for (i = 0; i < 11; i++)
	{
		printf("%.1f\n", add[i]);
	}
}
int main(void)
{
	num();
}