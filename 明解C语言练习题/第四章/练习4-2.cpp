//明解C语言练习4-2
//编写一段程序,读取输入的两个值并计算出大于b小于a的所有值的和
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no, num, sum;

	printf("请输入一个整数：");
	scanf("%d", &no);
	printf("请输入一个整数：");
	scanf("%d", &num);
	int big, max;
	big = 0;
	max = 0;
	sum = 0;
	if (no > num)
	{
		big = no;
		max = num;
	}
	else
	{
		big = num;
		max = no;
	}
	do
	{
		sum += max;
		max++;
	} while (max<=big);
	printf("大于%d小于%d的所有整数的和是%d", max, big, sum);
	return 0;
}

//看了答案做了优化

int main()
{
	int no, num, sum;

	printf("请输入一个整数：");
	scanf("%d", &no);
	printf("请输入一个整数：");
	scanf("%d", &num);
	int big, max;
	big = 0;
	max = 0;
	sum = 0;
	if (no > num)
	{
		big = no;
		max = num;
	}
	else
	{
		big = num;
		max = no;
	}
	printf("大于%d小于%d的所有整数的和是", max, big);//max与big放在这里打印出来的max还未递增,放下边打印max就是max++后的值
	do
	{
		sum += max;
		max++;
	} while (max<=big);
	printf("%d",sum);
	return 0;
}
