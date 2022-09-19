//明解C语言
//练习6-9
/*创建一个函数,对元素个数为n的int型数组v2进行倒序排列并保存在v1中.函数创建规则
void rev_intary(const int v1[],const int v2, int n)*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 10
void rev_rcpy(const int v1[],const int v2[], int n)
{
	int i = 0;
	int mum[10] = { 0 };
	int num[10] = { 0 };
	printf("数组倒序排列了\n");
	for(i=0;i<n;i++)
	{
		if (num[i] < v2[i])
		{
			num[i] = v2[i];
		}
		if (mum[i]>=v1[i])
		{
			mum[i] = v1[i];
		}
	}

	for (i = 0; i < n; i++)
	{
		mum[i] += num[i];
	}
	i = 0;
	while (n-- > 0)
	{
		printf("arr[%d]:%3d\n",i++, mum[n]);
	}
}

int main()
{
	int arr[NUMBER] = { 0 };
	int arr2[NUMBER];
	int i;
	printf("请给元素赋值:\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("arr2[%d]:", i);
		scanf("%d", &arr2[i]);
	}
	rev_rcpy(arr, arr2, NUMBER);
}
//鬼晓得怎么想的,函数写的像运行代码,运行代码写的像函数
//MLGBZ,写完了看题发现题目要求V1不用const修饰