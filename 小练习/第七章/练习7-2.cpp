//明解C语言第七章7-2
/*编写一个程序，确认只要没有发生高位溢出，则：
无符号整数位左移后的值等于其乘以2的指数幂后的值。
无符号整数位右移后的值等于其除以2的指数幂后的值。*/
#include <stdio.h>
#include <limits.h>
size_t set(size_t x, int pos)
{
	size_t i = 1;
	return x | (i << pos);
}
size_t reset(size_t x, int pos)
{
	size_t i = 1;
	return x & (i << pos);
}
size_t inverse(size_t x, int pos)
{
	size_t i = 1;
	
	return x^(i<<pos)
}
int main()
{
	size_t uns_int = 0;
	int x = 0;
	int i = 0;
	size_t sum = 0;
	do
	{
		printf("设1(1)/设0(2)/取反(3)/退出(0)");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("%u第%d位设1的结果是", uns_int, x);
			sum = set(uns_int, x);
			printf("%u\n", sum);
			break;
		case 2:
			printf("%u第%d位设0的结果是", uns_int, x);
			sum = set(uns_int, x);
			printf("%u\n", sum);
			break;
		case 3:
			printf("%u第%d位取反的结果是", uns_int, x);
			sum = set(uns_int, x);
			printf("%u\n", sum);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误,请重新输入\n")
			break;
		}
	
	} while (i);


}