#define _CRT_SECURE_NO_WARNINGS 1
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
#include<stdio.h>

int calculate(int n, int k)
{
	if (k > 0)
		return n * calculate(n, k - 1);
	else
		return 1;
}
int main()
{
	int n = 0, k = 0;
	printf("������n��k��ֵ\n");
	scanf("%d%d", &n, &k);
	int result=calculate(n, k);
	printf("�����%d\n", result);
	return 0;
}