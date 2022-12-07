#define _CRT_SECURE_NO_WARNINGS 1
#include "Contacts.h"
void Init(struct Concats* con)
{
	con->sz = 0;//将sz初始化为0
	memset(con->date, 0, MAX *sizeof(struct Peopleinfo));//使用memset将整个结构体始化
}

void Addcon(struct Concats* con)
{
	if (100 == con->sz)
	{
		printf("通讯录已满，请删除后再试\n");
		return;
	}
	
	printf("请输入姓名:>"); scanf("%s", con->date[con->sz].name);
	printf("请输入性别:>"); scanf("%s", con->date[con->sz].sex);
	printf("请输入年龄:>"); scanf("%d", &(con->date[con->sz].age));
	printf("请输入联系方式:>"); scanf("%s", con->date[con->sz].tel);
	printf("请输入住址:>"); scanf("%s", con->date[con->sz].addr);
	printf("录入成功！\n");
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
	printf("请输入要查找人姓名:>");
	scanf("%s", name);
	ret = Find(con, name);
	if (-1 == ret)
	{
		printf("没有查到指定联系人信息\n");
	}
	else if(-1!=ret)
	{
		printf("%-10s\t%-5s\t%-10s\t%-20s\t%-20s\t\n", "姓名", "性别", "年龄", "住址", "联系方式");
		
		printf("%-10s\t%-5s\t%-10d\t%-20s\t%-20s\t\n", con->date[ret].name, con->date[ret].sex, con->date[ret].age
			, con->date[ret].addr, con->date[ret].tel);
	}
}

void Delete(struct Concats* con)
{
	printf("请输入要删除联系人名称:>");
	char name[MAX_NAME];
	scanf("%s", name);
	if (-1 == Find(con, name))
	{
		printf("没有此联系人信息\n");
	}
	else
	{
		for (int i = 0; i <con->sz-1 ; i++)
		{
			con->date[i + 1] = con->date[i];
		}
	}
	printf("成功删除联系人！\n");
	con->sz--;
}

void Amend(struct Concats* con)
{
	char name[MAX_NAME];
	printf("请输入要修改信息的联系人名称:>");
	scanf("%s", name);
	int ret = Find(con, name);
	if (-1 == ret)
	{
		printf("通讯录内没有该联系人信息\n");
	}
	else
	{
		printf("请输入新的名称:>"); scanf("%s", con->date[ret].name);
		printf("请输入新的性别:>"); scanf("%s", con->date[ret].sex);
		printf("请输入新的年龄:>"); scanf("%d", &con->date[ret].age);
		printf("请输入新的住址:>"); scanf("%s", con->date[ret].addr);
		printf("请输入新的联系方式:>"); scanf("%s", con->date[ret].tel);
		printf("联系人信息修改成功！\n");
	}
}


void show(struct Concats* con)
{
	int i = 0;
	if (con->sz == 0)
	{
		printf("无任何联系人信息\n");
		return;
	}
	printf("%-10s\t%-5s\t%-10s\t%-20s\t%-20s\t\n", "姓名", "性别", "年龄", "住址", "联系方式");
	for (i = 0; i < con->sz; i++)
	{
		printf("%-10s\t%-5s\t%-10d\t%-20s\t%-20s\t\n", con->date[i].name, con->date[i].sex, con->date[i].age
			, con->date[i].addr, con->date[i].tel);

	}
	return;
}

void Empty(struct Concats* con)
{
	con->sz = 0;//此代码只是将空间数量删除掉，并非真正意义上的清空通讯录的信息
	printf("通讯录已清空\n");
	
}

int Cmpname(const void* a, const void* b)
{
	return strcmp(((struct Peopleinfo*)a)->name,  ((struct Peopleinfo*)b)->name);
}
	void Sort(struct Concats* con)
{
	qsort(con->date, con->sz, sizeof(struct Peopleinfo), Cmpname);
	printf("已按照名字从小到大排序完毕！\n");
}