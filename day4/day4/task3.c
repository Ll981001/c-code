#define _CRT_SECURE_NO_WARNINGS 1
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
#include<stdio.h>
#include<math.h>
int main()
{
	int sum = 0;
	int a = 0;
	printf("请输入一个数字：");
	scanf("%d", &a);
	int temp = a;
	a = 0;
	for (int i = 1; i <= 5; i++)
	{
		a += temp * pow(10, i - 1);
		sum += a;
	}
	printf("%d", sum);
	return 0;
}
