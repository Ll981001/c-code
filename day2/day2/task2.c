#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������ʱ����������������ֵ �������������ᵼ�����
//���ð�λ���
int main2()
{
	int x, y;
	printf("��������������\n");
	scanf("%d%d", x, y);
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	//int a = 4;
	//int b = 6;
	//a = a + b;
	//b = a - b;
	//a = a - b;
	return 0;
}
