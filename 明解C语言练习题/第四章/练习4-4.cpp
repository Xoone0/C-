//明解C语言练习4-4
/*更改以下程序达到两个功能
1. 递减到1而非递减到0
2. 当输入值小于0时,不进行换行*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	while (no >= 0)
		printf("%d ", no--);	/* no的值在显示之后递减 */
	printf("\n");				/* 换行 */

	return 0;
}



//更改后
int main(void)
{
	int no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	while (no >= 1)
		printf("%d\n", no--);
	if (no<0)
	{
		return 0;
	}				
	
}


//别人的解题思路
int main()
{
    int no;

    printf("请输入一个正整数：");
    scanf("%d",&no);

    while (no > 0){
        printf("%d ",no--);
    }
    if (no == 0)
    {
        printf("\n");
    }

    return 0;
}
