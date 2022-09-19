//明解C语言
//联系5-10
//使用多维数组创建一个4行3列矩阵和3行4列的乘积，构成个元素的值从键盘输入
int main()
{
	int a[4][3];
	int b[3][4];
	int i, j, l;
	printf("请输入12次数值:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("请在输入12次数值:");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	int sum[4][4] = { 0 };
	l = 4;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			for (l = 0; l < 3; l++)
				sum[i][j] += a[i][l] * b[l][j];

	//ANSWERS
	puts("The answer of first Matrix and second Matrix is:");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%d\t", sum[i][j]);
		putchar('\n');
	}
	return 0;
}
//这段代码最后两段是从CSDN上面抄写的,现在看不懂这个运算逻辑