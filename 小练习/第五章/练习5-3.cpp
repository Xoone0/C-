//练习5-3
//对下列代码进行更改,初始化数值顺序更改为5.4.3.2.1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int v[5] = { 1,2,3,4,5 };		/* 初始化 */

	for (i = 0; i < 5; i++)			/* 显示元素的值 */
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}


//修改后
int main(void)
{
	int i;
	int v[5] = { 5,4,3,2,1 };		/* 初始化 */

	for (i = 0; i < 5; i++)			/* 显示元素的值 */
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
