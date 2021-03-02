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
	//初始化棋盘
	init_board(board,ROW,COL);
	//展示 
	display_board(board, ROW, COL);
	int flag = 0;
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		display_board(board, ROW, COL);
		//判断是否结束
		 ret = iswin(board, ROW, COL);
		 if (ret != 'C')
		 {
			 break;
		 }
		//电脑下棋
		ComputerMove(board, ROW, COL);
		display_board(board, ROW, COL);
		//判断是否结束
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("游戏胜利-!-\n");
	else if (ret == '#')
		printf("游戏失败-。-\n");
	else
		printf("游戏平局-，-\n");
}
int main()
{
	srand((unsigned int) time(NULL));
	int input = 0;
	
	do {
		manu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case(1):
			game();
			break;
		case(0):
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}