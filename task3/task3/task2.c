#define _CRT_SECURE_NO_WARNINGS 1
//����n�Ľ׳�
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	int i = 1;
	int result = 1;
	int n;
	printf("������n��ֵ��");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		result *= i;
	}
	printf("%d�Ľ׳�Ϊ:%d\n", n, result);//10�Ľ׳�3628800

	return 0;
}