#define _CRT_SECURE_NO_WARNINGS 1
//���ַ������ڴ���һ�����Ķ�����
#include<stdio.h>
#include<stdlib.h>
int solve1(unsigned int n)
{
	int count = 0, i = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
int solve2(int n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n >> i) & 1 == 1)
		{
			count++;
		}
	}
	return count;
}
//�м���1��ѭ������
int solve3(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int input;
	printf("������һ��������");
	scanf("%d",&input);
	int count1 = solve1(input);
	int count2 = solve2(input);
	int count3 = solve3(input);
	printf("%d %d %d\n", count1, count2, count3);
	system("pause");
	return 0;

}