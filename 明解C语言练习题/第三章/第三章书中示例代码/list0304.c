/*
	���������ֵ����������ż��
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("������һ��������");
	scanf("%d", &no);

	switch (no % 2)
		case 1:	printf("��������������"); break;
		case 2: puts("��������ż����"); break;

			return 0;
}
