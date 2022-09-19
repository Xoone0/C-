//明解C语言练习2-1
//如果在int型变量的声明中为变量赋一个实数值的初始值如（3.14或5.7）等会怎么样，请生成程序
#define _CRT_SECURE_NO_WARNINGS/*关于使用VS2019开发C语言中scanf函数的使用 
(# define _ CRT _ SECURE _ NO _ WARNINGS 1) 
1、每次使用scanf函数前都要在开头手动输入 # define _ CRT _ SECURE _ NO _ WARNINGS用来消除由于函数的安全性导致的VS2019的报错。*/
#include <stdio.h>
int main()
{
	int i = 3.14;/*int i;这是声明了一个int（整型）变量a（变量名称）*/
	int j = 5.7;/*j=5.7。这是给变量j初始化一个数值（5.7）*/
	int a;
	a = 3; /*这里的a=3不同于上述的int j = 5.7;上述为在创建变量的同时给了一个数值所以称之为初始化。而这里是创建变量后再给数值，称之为赋值*/
	int b = 6;
	printf("%d\n",a);//\n为转义字符，功能为换行
	printf("%d\n",b); //%d为输出十进制格式
	printf("%d\n",i);
	printf("%d\n",j);
	return 0;
}