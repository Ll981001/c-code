#define _CRT_SECURE_NO_WARNINGS 1
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
#include<stdio.h>
void printfchengfabiao(int x)
{
	int i = 1;
	for (i = 1; i <= x; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%-2d*%-2d=%-3d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int i = 1;
	printf("������˷��ھ����������");
	scanf("%d", &i);
	printfchengfabiao(i);
	return 0;
	
}