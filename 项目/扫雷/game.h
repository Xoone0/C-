#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 可见棋盘大小
#define ROW 9
#define COL 9
// 带一圈边界的真实数组大小（便于统计周围 8 个位置）
#define ROWS (ROW + 2)
#define COLS (COL + 2)
// 地雷数量
#define ZHA_DAN 10

// 初始化棋盘数组
void Inboard(char board[ROWS][COLS], int row, int col, char set);
// 打印棋盘
void print_board(char board[ROWS][COLS], int row, int col);
// 随机布置地雷
void Set(char board[ROWS][COLS], int row, int col);
// 玩家排雷流程
void Find_show(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
