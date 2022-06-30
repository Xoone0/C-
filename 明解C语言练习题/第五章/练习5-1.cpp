//练习5-1
//对下列代码进行更改,赋值数值更改为0.1.2.3.4
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
	int v[5];	/* int[5]数组 */

	for (i = 0; i < 5; i++)		/* 为数组元素赋值 */
		v[i] = i;		//上述表达式已经将i递增,所以这里就无需+1,不然无法赋值0

	for (i = 0; i < 5; i++)		/* 显示元素的值 */
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
