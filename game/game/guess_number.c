#define _CRT_SECURE_NO_WARNINGS 1
//��������Ϸ
//1��������һ�������
//2������
#include<stdio.h>
#include<stdlib.h.>
#include<time.h>
#include<windows.h>
void menu()
{
	printf("***********************************\n");
	printf("***** 1.��ʼ��Ϸ  0.������Ϸ ******\n");
	printf("***********************************\n");
}
void game()
{
	//���������
	int num = 1;
	int guess = 1;
	num = rand()%100+1; //0x7fffz���ֵΪ32,767   ����100֮��������
	printf("������ʾ��������100֮��Ŷ\n");
	while (1)
	{
		scanf("%d", &guess);
		if (guess < num)
			printf("��С��\n");
		else if (guess > num)
			printf("�´���\n");
		else
		{
			printf("��ϲ�㣬�¶���!!!!!!!\n");
			Sleep(1000);
			system("cls");
			break;
		}
	}
	

	//������
}
int main()
{
	int tag=1;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();//��ʾ��Ϸ���� 1��ʼ��Ϸ 0������Ϸ
		scanf("%d",&tag);
		switch (tag)
		{
		case 0:
			printf("��Ϸ��������ӭ�´�����!!!\n");
			break;
		case 1:
			printf("��Ϸ��ʼ!!!\n");
			game();
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (tag);

	

	return 0;
}
