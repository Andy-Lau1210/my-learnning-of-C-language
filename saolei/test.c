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
	//�洢�׵���Ϣ
	//1.�����׵���Ϣ
	char mine[ROWS][ROWS] = { 0 };//11*11
	//2.�Ų��׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, ROWS,'0');
	InitBoard(show, ROWS, ROWS,'*');
	//��ʾ����
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);
	//�����׵�λ��
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//����
	FindMine(mine,show,ROW,COL);//��mine�����ȡ��Ϣ���ŵ�show����
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��;>\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ����������ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}