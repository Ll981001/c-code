#define _CRT_SECURE_NO_WARNINGS 1
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//�ݹ�
#include<stdio.h>
int fib(int n)
{
	if (n >= 2)
		return (fib(n - 1) + fib(n - 2));
	else if (n == 1)
		return 1;
	else
		return 0;
}
//�ǵݹ�
int fib1(int n)
{
	int result=0;
	int pre=0;
	int p=1;
	int i = 2;
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
	{
		while (i <=n)
		{
			result = pre + p;
			pre = p;
			p = result;
			i++;
		}
		return result;
	}
	

}
int main()
{
	int F_n=0;
	int F_n1 = 0;
	int n = 0;
	printf("������һ��������\n");
	scanf("%d",&n);
	F_n=fib(n-1);
	printf("��%d��쳲���������%d\n",n,F_n);
	F_n1=fib1(n - 1);
	printf("��%d��쳲���������%d\n", n, F_n1);

	return 0;
}
