//明解C语言练习1-8
//读取输入的三个值，输出他们的和
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int i,j,sum,num;//通过,可以一次性声明多个变量但不可以写成int i,j,num = 0;
	i = 0;
	j = 0;
	num = 0;
	printf("请输入一个整数:");scanf("%d",&i);
	printf("请再输入一个整数:");scanf("%d",&j);
	printf("请再输入一个整数:");scanf("%d",&num);
	num = sum + i + j;
	printf("他们的和是%d:",num);
	return 0;
}

//另一种写法为
int main()
{
	int i,j,num;
	i = 0;
	j = 0;
	num = 0;
	printf("请输入一个整数:");scanf("%d",&i);
	printf("请再输入一个整数:");scanf("%d",&j);
	printf("请再输入一个整数:");scanf("%d",&num);
	printf("他们的和是%d:",num + j + i);
	return 0;
}

//第三种写法，但不建议这样写，不规范。编译时会提醒printf传递参数过多
int main()
{
	int i,j,sum,num;
	i = 0;
	j = 0;
	num = 0;
	printf("请输入一个整数:");scanf("%d",&i);
	printf("请再输入一个整数:");scanf("%d",&j);
	printf("请再输入一个整数:");scanf("%d",&num);
	printf("他们的和是%d:",num,num = sum + j + i);
	return 0;
}

