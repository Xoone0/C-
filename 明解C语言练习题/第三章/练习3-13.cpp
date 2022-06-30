//明解C语言练习3-13
//将下列代码使用switch更改达到同样效果
#define _CRT_SECURE_NO_WARNINGS,
#include <stdio.h>
int main(void)
{
	int month;					/* 月 */

	printf("请输入月份");
	scanf("%d", &month);

	if (month >= 3 && month <= 5)
		printf("%d月是春季。\n", month);
	else if (month >= 6 && month <= 8)
		printf("%d月是夏季。\n", month);
	else if (month >= 9 && month <= 11)
		printf("%d月是秋季。\n", month);
	else if (month == 1 || month == 2 || month == 12)
		printf("%d月是冬季。\n", month);
	else
		printf("%d月不存在!!\a\n", month);

	return 0;
}

//更改后
int main(void)
{
	int month;					/* 月 */

	printf("请输入月份");
	scanf("%d", &month);
	switch (month)
	{
	case 1: printf("%d月是冬季", month); break;
	case 2: printf("%d月是冬季", month); break;
	case 3: printf("%d月是春季", month); break;
	case 4: printf("%d月是春季", month); break;
	case 5: printf("%d月是春季", month); break;
	case 6: printf("%d月是夏季", month); break;
	case 7: printf("%d月是夏季", month); break;
	case 8: printf("%d月是夏季", month); break;
	case 9: printf("%d月是秋季", month); break;
	case 10: printf("%d月是秋季", month); break;
	case 11: printf("%d月是秋季", month); break;
	case 12: printf("%d月是冬季", month); break;

	default: printf("%d月不存在!!\a\n", month);
		break;
	}
	return 0;
}
