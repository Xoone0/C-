//明解C语言练习4-3
//更改以下程序,输入负数时不打印换行
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	while (no >= 0) {
		printf("%d ", no);
		no--;			/* no的值递减 */
	}
	printf("\n");		/* 换行 */

	return 0;
}


//更改后
int main(void)
{
	int no;

	printf("请输入一个正整数：");
	scanf("%d", &no);
	if (no>=0)
	{
		while (no >= 0) {
			printf("%d ", no);
			no--;
			printf("\n");
		}

	}
	else
	{
		;
	}

	return 0;
}

//别人的解题思路
int main()
{
    int no, num;
    num = 0;

    printf("请输入一个正整数：");
    scanf("%d",&no);

    while (no >= 0)
    {
        printf("%d ",no);
        no--;
        num++;
    }
    if (num != 0)
    {
        printf("\n");
    }
    return 0;
}
