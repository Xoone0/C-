//明解C语言练习1-6
//使用scanf读取输入的数值，并输出该整数减去6的结果
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int num = 6;
	int a = 0;
	printf("请输入一个整数:");
	scanf("%d",&a);
	printf("该整数减去6的结果是%d",a+num);
	return 0;
}

//另一种写法为
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int num = 6;
	int a = 0;
	printf("请输入一个整数:");
	scanf("%d",&a);
	int rum = 0;
	rum = a - num;
	printf("该整数加上12的结果是%d",rum);
	return 0;
}
/*在减法运算代码中a-b与常规数学算法不同，是从a的值中减去b的值
例如1-2在数学算法中得出的数值为1，因为他会自动将数值小的一方作为被减值。但在此段代码中运算结果为-1