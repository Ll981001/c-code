#define _CRT_SECURE_NO_WARNINGS 1
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
#include<stdio.h>
//�ǵݹ�
int calculate1(int n)
{
	int result = 1;
	int i = 1;
	for (i = 1; i <= n; i++)
		result *= i;
	return result;
}
//�ݹ�
int calculate2(int n)
{
	if (n > 1)
	{
		return n * calculate2(n - 1);
	}
	return 1;
}
int main()
{
	int n = 0;
	printf("������һ������n:");
	scanf("%d", &n);
	int result1=calculate1(n);
	printf("�����%d\n", result1);
	int result2 = calculate2(n);
	printf("�����%d\n", result2);
}