#define _CRT_SECURE_NO_WARNINGS 1
//���0��999֮������С�ˮ�ɻ������������	
//ˮ�ɻ�������ָһ����λ�������λ���ֵ����������õ��ڸ��������磻153��1��5*5*5��3*3*3����153��һ����ˮ�ɻ�������
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 999; i++)
	{
		if (pow(i /100, 3) + pow((i / 10)%10, 3) + pow(i%10,3) == i)
			printf("%d ", i);
	}
	return 0;
}