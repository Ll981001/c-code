#define _CRT_SECURE_NO_WARNINGS 1
//2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�
#include<stdio.h>
int main()
{
	int input = 0;
	printf("������һ������\n");
	scanf("%d", &input);
	int a[16] = { 0 };
	int b[16] = { 0 };
	int i = 0;
	for (i = 0; i < 32;i++ )
	{
		a[i/2] = ((input >> i) & 1);
		i++;
		b[(i-1)/2] =( (input >> i) & 1);

	}
	for (i = 15; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 15; i >=0; i--)
	{
		printf("%d ", b[i]);
	}
	return 0;
}