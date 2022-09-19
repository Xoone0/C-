//明解C语言
//练习6-11
/*创建一个函数search_idx读取传入的值,例如传入的值为{1，2，7，3，7，5，7}
key为7,那么下标{2,4,6}被存放到idx中并返回输出3*/
#define NUMBER 5

int search_idx(int v[], int m, int number)
{
	int i = 0;
	int u = 0;
	v[number] = m;
	do
	{
		if (i==m)
		{
			u++;
		}
		i++;
	} while (i<number);
	
	return (i < number) ? u : FALL;

}
int main()
{
	int arr [n + 1];
	int ky;
	int i = 0;
	int idx;
	printf("请输入%d个整数:", n);
	for (i = 0; i <= n; i++)
	{
		printf("v[%d]",i);
		scanf_s("%d", &arr[i]);
	}
	printf("请输入要查找的数值:");
	scanf_s("%d", &ky);
	if ((idx = search_idx(arr, ky, n))==FALL)
		printf("没有查找到相同的数值");
	else
	printf("和%d相同的数值有%d个", ky, idx);
	return 0;
}
//看完别人的代码更改后
#define NUMBER 10
#define FALL	
int search_idx(int v[], int ky, int number)
{
	int i;
	int m = 0;
	for (i = 0; i < number; i++)
	{
		if (v[i]==ky)
		{
			m++;
		}
	}
	return m;
}
int main()
{
	int arr[NUMBER] = { 0 };
	int i = 0;
	int key;
	printf("请给数组赋值:");
	for (i = 0; i < NUMBER; i++)
	{
		printf_s("arr[%d]", i);
		scanf_s("%d", &arr[i]);
	}
	printf("请输入要查找的元素:");
	scanf_s("%d", &key);
	int dcc;
	dcc = search_idx(arr, key, NUMBER);
	printf("和%d相同的值有%d个", key, dcc);
	for (i = 0; i < dcc; i++)
	{
		printf("arr[%d]:%d", i, dcc);
	}
	return 0;
}
/*错误的地方为49行判断表达式书写错误v[i]写成了i,还没有达到一个功能
输出key相同的值在数组中下标分别为{1,3,6}暂时没有想到办法*/