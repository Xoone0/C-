/*
	������������������Ĳ��ʾ�������������
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("����������������");
	printf("����1��");   scanf("%d", &n1);
	printf("����2��");   scanf("%d", &n2);

	if (n1 > n2)
	{
		printf("���ǵĲ���", n1 - n2);
	}
	else if (n2 > n1)
	{
		printf("���ǵĲ���%d", n2 - n1);
	}

	return 0;
}
