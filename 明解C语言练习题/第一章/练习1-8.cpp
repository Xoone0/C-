//明解C语言练习1-8
//读取两个变量的数值，输出他们的积
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int i,j,sum;//通过,可以一次性声明多个变量但不可以写成int i,j,num = 0;
	i = 0;
	j = 0;
	//sum = j * i;这里有一个错误，sum的赋值表达式创建在了scanf函数前，导致结果为sum = 0 * 0； 。正确写法为在scanf下创建
	printf("请输入一个整数:");scanf("%d",&i);
	printf("请再输入一个整数:");scanf("%d",&j);
	sum= j * i;
	printf("他们的积是%d:",sum);
	return 0;
}

//另一种写法为
int main()
{
	int i,j;
	i = 0;
	j = 0;
	printf("请输入一个整数:");scanf("%d",&i);
	printf("请再输入一个整数:");scanf("%d",&j);
	printf("他们的积是%d:",j * i);
	return 0;
}

//第三种写法，但不建议这样写，不规范。编译时会提醒printf传递参数过多
int main()
{
	int i,j,sum;
	i = 0;
	j = 0;
	printf("请输入一个整数:");scanf("%d",&i);
	printf("请再输入一个整数:");scanf("%d",&j);
	printf("他们的积是%d:",sum,sum=j*i);
	return 0;
}

