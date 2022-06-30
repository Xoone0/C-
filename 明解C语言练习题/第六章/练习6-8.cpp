//明解C语言
//练习6-8
/*编写一段程序,通过调用函数的方式来输出一段数组中的最小值,函数规定
int min_of(const int v[], int n)*/
#define NUMBER 10
int min_of(const int v[], int n)
{
	int xiao = v[0];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (v[i]<xiao)
		{
			xiao = v[i];
		}
		return v, i;
	}
	return v,n;
}
int  main()
{
	int tensu[NUMBER];
	int i = 0;
	printf("请输入%d个整数:",NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		scanf("%d", &tensu[i]);

	}
	min_of(tensu, NUMBER);
	printf("最小值为%d", tensu[NUMBER]);

}
//正确写法,函数总是用错

#define NUMBER 10
int min_of(const int v[], int n)
{
	int xiao = v[0];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (v[i] < xiao)
		{
			xiao = v[i];
		}
	}
	return xiao;
}
int  main()
{
	int tensu[NUMBER];
	int i = 0;
	printf("请输入%d个整数:", NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		scanf("%d", &tensu[i]);

	}
	
	printf("最小值为%d", min_of(tensu, NUMBER));

}