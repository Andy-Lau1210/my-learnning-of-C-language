#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void initboard(char board[ROW][COL], int row, int col)//������ʵ�֣���ʼ������ȫ��Ϊ�ո�
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row ; i++)//��ӡ������
	{
		for (j = 0; j < col;j++)
		{
			printf(" %c ",board[i][j]);//��ӡһ������
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col;j++)//��ӡ�ָ���
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("�����������������:>\n");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row &&y >= 1 && y <= col)
		{
			if (board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�������ѱ�ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ������������!\n");
		}
	}
}

void computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������:>\n");
	while (1)
	{
		x = rand() % row;//�������
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int isfull(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//��ʾ����û��
			}
		}
	}
	return 1;//��ʾ��������
}

char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row;i++)//�ж�����
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < row; i++)//�ж�����
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж�б�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж��Ƿ�ƽ��
	if (isfull(board,ROW,COL)==1)
	{
		return 'Q';
	}
	//�ж��Ƿ����
	return 'C';
}