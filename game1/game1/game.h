#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>
//函数声明
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL],int row,int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
//告诉我们四种游戏状态
//玩家赢，返回'*'
//电脑赢，返回'#'
//平局，返回'Q'
//继续，返回'C'
char iswin(char board[ROW][COL], int row, int col);