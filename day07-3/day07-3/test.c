#define _CRT_SECURE_NO_WARNINGS 1
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
#include<stdio.h>
int DigitSum(int n)
{
	if (n > 0)
	{
		return n%10+DigitSum(n / 10);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n=0;
	printf("������һ���Ǹ�����\n");
	scanf("%d", &n);
	int result=DigitSum(n);
	printf("��Ϊ%d\n", result);
	return 0;
}