#define _CRT_SECURE_NO_WARNINGS
//������������Ϸ
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

//��Ϸ���㷨ʵ��
void game()
{
	char ret = 0;
	//�������ڴ���߳���������Ϣ
	char board[ROW][COL] = { 0 };//��������
	initboard(board,ROW,COL);//��ʼ������
	displayboard(board,ROW,COL);//��ӡ����
	//����
	while (1)
	{
		//�������
		playermove(board,ROW,COL);
		displayboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = iswin(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
		//��������
		computermove(board,ROW,COL);
		displayboard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��ϲ�㣬Ӯ�˵���\n");
	}
	else if (ret == '#')
	{
		printf("��ϲ�㣬����˵���\n");
	}
	else
	{
		printf("��ϲ�㣬�����ǵ��Բ��ֲ���\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//���������
	do
	{
	    menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("�õģ�����!!!\n");
			game();
			break;
		case 0:
			printf("�õ��ټ����˳���Ϸ!!!\n");
			break;
		default:
			printf("������󣬿�������!!!\n");
			break;
		}
	} while (input);
	
}
int main()
{
	test();
	return 0;
}