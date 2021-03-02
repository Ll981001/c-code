#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//��ʼ������
void init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//չʾ����
void display_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1.��ӡһ������
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//2.��ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}
//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("����ߣ�\n");
	printf("������Ҫ�µ�����:");
	int x = 0, y = 0;
	scanf("%d%d",&x,&y);
	while ( x > row || y > col || x < 1 || y < 1||board[x-1][y-1]!=' ')
	{
		if (board[x - 1][y - 1] != ' ')
		{
			printf("���걻ռ�ã�����������:");
		}
		else {
			printf("����Ƿ�������������:");
		}
		scanf("%d%d", &x, &y);
	}
	board[x-1][y-1] = '*';
}
//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("�����ߣ�\n");
	int x = 0, y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % row;
		if(board[x][y]==' ')
		{
		board[x][y] = '#'; 
		break;
		}
	}
}
char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	//������
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][0];
	}
	//������
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j] != ' ')
			return board[0][j];
	}
	//�Խ���
	if (board[1][1] == board[2][2] && board[2][2] == board[0][0] && board[2][2] != ' ')
		return board[2][2];
	if (board[2][0] == board[1][1] && board[2][0] == board[0][2] && board[2][0] != ' ')
		return board[2][0];
	//ƽ�ֻ������Ϸ
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'C';
		}
	}
	return 'P';
		
}