#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Contacts.h"
#define MAX 100
#define MAX_NAME 8
#define MAX_SEX 5
#define MAX_TEL 15
#define MAX_ADDR 30
struct Peopleinfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];

};
struct Concats
{
	struct Peopleinfo date[MAX];
	int sz;
};
void Init(struct Concats* con);//初始化通讯录

void Addcon(struct Concats* con);//新增联系人

int Find(struct Concats* con, char name[]);//查找函数

void Searchcon(struct Concats* con);//搜索指定联系人

void Delete(struct Concats* con);//删除指定联系人

void show(struct Concats* con);//显示所有联系人

void Amend(struct Concats* con);//修改指定联系人信息

void Empty(struct Concats* con);//清空通讯录

void Sort(struct Concats* con);//按名字排序通讯录

int Cmpname(const void* a, const void* b);
