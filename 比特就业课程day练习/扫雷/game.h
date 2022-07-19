#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//操作棋盘定义
#define ROW 9
#define COL 9
//布置雷棋盘定义
#define ROWS ROW+2
#define COLS COL+2
//炸弹数量
#define zha_dan 10
//初始化棋盘
Inboard(char board[ROWS][COLS], int row, int col, char set);
//打印棋盘
print_board(char board[ROWS][COLS], int row, int col);
//布置雷
Set(char board[ROWS][COLS], int row, int col);
//排查雷
Find_show(char show[ROWS][COLS],char mine[ROWS][COLS], int x, int y);

