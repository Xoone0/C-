#define _CRT_SECURE_NO_WARNINGS 1
#include "Contacts.h"
void Init(struct Concats* con)
{
	con->sz = 0;//��sz��ʼ��Ϊ0
	memset(con->date, 0, MAX *sizeof(struct Peopleinfo));//ʹ��memset�������ṹ��ʼ��
}

void Addcon(struct Concats* con)
{
	if (100 == con->sz)
	{
		printf("ͨѶ¼��������ɾ��������\n");
		return;
	}
	
	printf("����������:>"); scanf("%s", con->date[con->sz].name);
	printf("�������Ա�:>"); scanf("%s", con->date[con->sz].sex);
	printf("����������:>"); scanf("%d", &(con->date[con->sz].age));
	printf("��������ϵ��ʽ:>"); scanf("%s", con->date[con->sz].tel);
	printf("������סַ:>"); scanf("%s", con->date[con->sz].addr);
	printf("¼��ɹ���\n");
	con->sz++;
}
int Find(struct Concats* con, char name[])
{
	int i = 0;
	for (i = 0; i < con->sz; i++)
	{
		if (0 == strcmp(con->date[i].name, name))
		{
			return i;
		}
	}
	return -1;

}
void Searchcon(struct Concats* con)
{
	char name[MAX_NAME];
	int ret = 0;
	printf("������Ҫ����������:>");
	scanf("%s", name);
	ret = Find(con, name);
	if (-1 == ret)
	{
		printf("û�в鵽ָ����ϵ����Ϣ\n");
	}
	else if(-1!=ret)
	{
		printf("%-10s\t%-5s\t%-10s\t%-20s\t%-20s\t\n", "����", "�Ա�", "����", "סַ", "��ϵ��ʽ");
		
		printf("%-10s\t%-5s\t%-10d\t%-20s\t%-20s\t\n", con->date[ret].name, con->date[ret].sex, con->date[ret].age
			, con->date[ret].addr, con->date[ret].tel);
	}
}

void Delete(struct Concats* con)
{
	printf("������Ҫɾ����ϵ������:>");
	char name[MAX_NAME];
	scanf("%s", name);
	if (-1 == Find(con, name))
	{
		printf("û�д���ϵ����Ϣ\n");
	}
	else
	{
		for (int i = 0; i <con->sz-1 ; i++)
		{
			con->date[i + 1] = con->date[i];
		}
	}
	printf("�ɹ�ɾ����ϵ�ˣ�\n");
	con->sz--;
}

void Amend(struct Concats* con)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸���Ϣ����ϵ������:>");
	scanf("%s", name);
	int ret = Find(con, name);
	if (-1 == ret)
	{
		printf("ͨѶ¼��û�и���ϵ����Ϣ\n");
	}
	else
	{
		printf("�������µ�����:>"); scanf("%s", con->date[ret].name);
		printf("�������µ��Ա�:>"); scanf("%s", con->date[ret].sex);
		printf("�������µ�����:>"); scanf("%d", &con->date[ret].age);
		printf("�������µ�סַ:>"); scanf("%s", con->date[ret].addr);
		printf("�������µ���ϵ��ʽ:>"); scanf("%s", con->date[ret].tel);
		printf("��ϵ����Ϣ�޸ĳɹ���\n");
	}
}


void show(struct Concats* con)
{
	int i = 0;
	if (con->sz == 0)
	{
		printf("���κ���ϵ����Ϣ\n");
		return;
	}
	printf("%-10s\t%-5s\t%-10s\t%-20s\t%-20s\t\n", "����", "�Ա�", "����", "סַ", "��ϵ��ʽ");
	for (i = 0; i < con->sz; i++)
	{
		printf("%-10s\t%-5s\t%-10d\t%-20s\t%-20s\t\n", con->date[i].name, con->date[i].sex, con->date[i].age
			, con->date[i].addr, con->date[i].tel);

	}
	return;
}

void Empty(struct Concats* con)
{
	con->sz = 0;//�˴���ֻ�ǽ��ռ�����ɾ�������������������ϵ����ͨѶ¼����Ϣ
	printf("ͨѶ¼�����\n");
	
}

int Cmpname(const void* a, const void* b)
{
	return strcmp(((struct Peopleinfo*)a)->name,  ((struct Peopleinfo*)b)->name);
}
	void Sort(struct Concats* con)
{
	qsort(con->date, con->sz, sizeof(struct Peopleinfo), Cmpname);
	printf("�Ѱ������ִ�С����������ϣ�\n");
}