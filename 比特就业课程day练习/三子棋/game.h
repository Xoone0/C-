#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3
//初始化棋盘
void Disboard(char arr[ROW][COL], int row, int col);
//打印棋盘
void Dizboard(char arr[ROW][COL], int row, int col);
//玩家移动
void PlayerMove(char arr[ROW][COL], int row,int col);
//电脑移动
void ComerMove(char arr[ROW][COL], int row, int col);
//判断输赢 
char IsWin(char arr[ROW][COL], int row, int col);
//判断棋盘是否满了
int IsFull(char arr[ROW][COL], int row, int col);
