#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("***********************************\n");
	printf("*************  1.play  ************\n");
	printf("*************  0.exit  ************\n");
	printf("***********************************\n");
}

void game()
{
	//存储雷的信息
	//1.布置雷的信息
	char mine[ROWS][ROWS] = { 0 };//11*11
	//2.排查雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, ROWS,'0');
	InitBoard(show, ROWS, ROWS,'*');
	//显示棋盘
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);
	//布置雷的位置
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//找雷
	FindMine(mine,show,ROW,COL);//从mine数组获取信息，放到show里面
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择;>\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请从新选择!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}