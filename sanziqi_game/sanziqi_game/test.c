#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void manu()
{
	printf("***********************\n");
	printf("**** 1.play 0.exit ****\n");
	printf("***********************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	init_board(board,ROW,COL);
	//չʾ 
	display_board(board, ROW, COL);
	int flag = 0;
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		display_board(board, ROW, COL);
		//�ж��Ƿ����
		 ret = iswin(board, ROW, COL);
		 if (ret != 'C')
		 {
			 break;
		 }
		//��������
		ComputerMove(board, ROW, COL);
		display_board(board, ROW, COL);
		//�ж��Ƿ����
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("��Ϸʤ��-!-\n");
	else if (ret == '#')
		printf("��Ϸʧ��-��-\n");
	else
		printf("��Ϸƽ��-��-\n");
}
int main()
{
	srand((unsigned int) time(NULL));
	int input = 0;
	
	do {
		manu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case(1):
			game();
			break;
		case(0):
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}