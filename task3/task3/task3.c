#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//����1��+2��+3��+....+10!
int main()
{
	int sum = 0;
	int i = 1;
	for (int j = 1; j < 11; j++)
	{
		int result = 1;//��result�����涨�� ��
		for (i = 1; i < j + 1; i++)
		{
			result *= i; // �����ѭ���޶��壬��result���ۼ�֮ǰ�Ľ��
		}//	n�Ľ׳�
		sum += result;
	}
	printf("%d\n", sum);//4037913
	return 0;
}//ʱ�临�Ӷ�Ϊn^2
//�Ż���������
int main()
{
	int sum = 0;
	int result = 1;

	for (int j = 1; j < 11; j++)
	{
		result = result * j;
		sum += result;
	}
	printf("%d\n", sum);//4037913
	return 0;
}
//ʱ�临�Ӷ�Ϊn	