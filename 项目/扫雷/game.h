#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//�������̶���
#define ROW 9
#define COL 9
//���������̶���
#define ROWS ROW+2
#define COLS COL+2
//ը������
#define zha_dan 10
//��ʼ������
Inboard(char board[ROWS][COLS], int row, int col, char set);
//��ӡ����
print_board(char board[ROWS][COLS], int row, int col);
//������
Set(char board[ROWS][COLS], int row, int col);
//�Ų���
Find_show(char show[ROWS][COLS],char mine[ROWS][COLS], int x, int y);

