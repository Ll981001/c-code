#define _CRT_SECURE_NO_WARNINGS 1
//5.ʵ��һ���������ж�һ�����ǲ���������
#include<stdio.h>
//����������1�����򷵻�0
int is_prime(int n)  
{
	int i = 2;
	for (i = 2; i < n / 2; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a = 0;
	printf("������һ������\n");
	scanf("%d", &a);
	if (is_prime(a))
	{
		printf("%d������\n", a);
	}
	else 
		printf("%d��������\n", a);
	return 0;
}