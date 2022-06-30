//练习5-4
//对下列代码进行更改,将a[i]的值倒序复制到b[i]内
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int a[5] = { 17,23,36 };/* 使用{17，23，36，0，0} 进行初始化 */
	int b[5];

	for (i = 0; i < 5; i++)
		b[i] = a[i];

	puts("  a    b");
	puts("---------");
	for (i = 0; i < 5; i++)
		printf("%4d%4d\n", a[i], b[i]);

	return 0;
}

//修改后
int main(void)
{
	int i;
	int a[5] = { 0,0,36,23,17 };/* 使用{17，23，36，0，0} 进行初始化 */
	int b[5];

	for (i = 0; i < 5; i++)
		b[i] = a[i];

	puts("  a    b");
	puts("---------");
	for (i = 0; i < 5; i++)
		printf("%4d%4d\n", a[i], b[i]);

	return 0;
}
//总感觉这段代码有哪里不对,去看了一下别人的代码,感觉自己写的好蠢
int main(void)
{
	int i;
	int a[5] = { 17,23,36 };/* 使用{17，23，36，0，0} 进行初始化 */
	int b[5];
		puts("  a    b");
		puts("---------");
		for (i = 0; i < 5; i++) {
			b[i] = a[4 - i];
			printf("%4d%4d\n", a[i], b[i]);
		}
	return 0;
}