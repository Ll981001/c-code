#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏
//1电脑生成一个随机数
//2猜数字
#include<stdio.h>
#include<stdlib.h.>
#include<time.h>
#include<windows.h>
void menu()
{
	printf("***********************************\n");
	printf("***** 1.开始游戏  0.结束游戏 ******\n");
	printf("***********************************\n");
}
void game()
{
	//生成随机数
	int num = 1;
	int guess = 1;
	num = rand()%100+1; //0x7fffz最大值为32,767   生成100之间的随机数
	printf("友情提示，数字在100之间哦\n");
	while (1)
	{
		scanf("%d", &guess);
		if (guess < num)
			printf("猜小了\n");
		else if (guess > num)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了!!!!!!!\n");
			Sleep(1000);
			system("cls");
			break;
		}
	}
	

	//猜数字
}
int main()
{
	int tag=1;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();//显示游戏界面 1开始游戏 0结束游戏
		scanf("%d",&tag);
		switch (tag)
		{
		case 0:
			printf("游戏结束，欢迎下次再来!!!\n");
			break;
		case 1:
			printf("游戏开始!!!\n");
			game();
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (tag);

	

	return 0;
}
