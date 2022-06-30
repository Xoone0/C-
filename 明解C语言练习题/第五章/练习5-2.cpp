//练习5-1
//对下列代码进行更改,赋值数值顺序更改为5.4.3.2.1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int v[5];	/* int[5]数组 */

	for (i = 0; i < 5; i++)		/* 为数组元素赋值 */
		v[i] = i + 1;

	for (i = 0; i < 5; i++)		/* 显示元素的值 */
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}


//修改后
int main(void)
{
	int i;
	int v[5];	
	for (i = 5; i >0; i--)
	{
		v[5-i] = i;  
		printf("v[%d] = %d\n", 5-i, v[5-i]);
	}
	return 0;
}
//今天有点迷,这是从网上搜的答案，看懂了.自己写的时候一直卡在了for的写法上,考虑判断表达式2能不能写成i>n