//明解C语言
//练习6-
/*创建一个函数,对元素个数为n的int型数组v进行倒序排列.函数创建规则
void rev_intary(int v[],int n)*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 10
void rev_intary(int v[], int a)
{
	int i = 0;
	printf("数组倒序排列了\n");
	while (a-- > 0)
	{
		printf("v[%d]:%3d\n", i,v[a]);
		i++;
	}

}
int main(void)
{
	int n[NUMBER];
	int i;
	printf("为数组赋值\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("n[%d]:", i);
		scanf_s("%d", &n[i]);
	}
	rev_intary(n, NUMBER);
	return 0;
}
//也有第二种写法,不过练习题对函数创建有要求,所以不写了
//void rev_intary(int v[],int n)前面的void要求不返回数值,所以只能调用。
