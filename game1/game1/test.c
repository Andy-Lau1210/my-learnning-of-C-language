#define _CRT_SECURE_NO_WARNINGS
//测试三子棋游戏
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("********************************************\n");
	printf("***************1.play 0.exit****************\n");
	printf("********************************************\n");
}
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |  

//游戏的算法实现
void game()
{
	char ret = 0;
	//数组用于存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//定义棋盘
	initboard(board,ROW,COL);//初始化棋盘
	displayboard(board,ROW,COL);//打印棋盘
	//下棋
	while (1)
	{
		//玩家下棋
		playermove(board,ROW,COL);
		displayboard(board, ROW, COL);
		//判断玩家是否赢
		ret = iswin(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
		//电脑下棋
		computermove(board,ROW,COL);
		displayboard(board, ROW, COL);
		//判断电脑是否赢
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("恭喜你，赢了电脑\n");
	}
	else if (ret == '#')
	{
		printf("恭喜你，输给了电脑\n");
	}
	else
	{
		printf("恭喜你，跟弱智电脑不分伯仲\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//生成随机数
	do
	{
	    menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("好的，开玩!!!\n");
			game();
			break;
		case 0:
			printf("好的再见，退出游戏!!!\n");
			break;
		default:
			printf("输入错误，看不懂啊!!!\n");
			break;
		}
	} while (input);
	
}
int main()
{
	test();
	return 0;
}