//明解C语言练习1-2
//编写一段程序，调用printf函数，纵向输出"天.地.人"
#define _CRT_SECURE_NO_WARNINGS/*关于使用VS2019开发C语言中scanf函数的使用 
(# define _ CRT _ SECURE _ NO _ WARNINGS 1) 
1、每次使用scanf函数前都要在开头手动输入 # define _ CRT _ SECURE _ NO _ WARNINGS用来消除由于函数的安全性导致的VS2019的报错。*/
#include <stdio.h>
int main()
{
	printf("天\n");//\n为转义字符，功能为换行
	printf("地\n");
	printf("人");
	return 0;
}