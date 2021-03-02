#define _CRT_SECURE_NO_WARNINGS 1
//3. 输出一个整数的每一位。
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ",n%10);
}
int main()
{
	int input = 0;
	printf("请输入一个整数：");
	scanf("%d",&input);
	print(input);
	return 0;
}