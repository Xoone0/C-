//明解C语言练习3-1
//创建一段程序，读取输入的两个值，并进行判断后者是否为前者的约数
define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int vx, vy;
	printf("请输入一个整数:"); scanf("%d", &vx);
	printf("请再输入一个整数:"); scanf("%d", &vy);
	if (vx % vy==0)
	{
		printf("vy是vx的约数");
	}
	else
	{
		printf("vy不是vx的约数");

	}

	return 0;
}
//第二种写法
define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int vx, vy;
	printf("请输入一个整数:"); scanf("%d", &vx);
	printf("请再输入一个整数:"); scanf("%d", &vy);
	int num = 0;
	num = vx % vy;
	if (num==0)
	{
		printf("%d是%d的约数",vy,vx);
	}
	else
	{
		printf("%d不是%d的约数",vy,vx);

	}

	return 0;
}

/*解题思路：
1.约数为a/b(b!=0),则b为a的约数
按照上述的说法来看,只要a可以被b除的尽,那么b就是a的约数.
那么如何判断呢
1.若a可以被b整除,那么余数就一定为0,所以使用求余运算符%号来计算余数是否为0进行判断即可
2.创建一个X变量存放a/b的值,在if语句里通过判断X是否能被2整除，若可以则为约数。不可以则不为约数（方法不行，傻逼思路）