#define _CRT_SECURE_NO_WARNINGS 1
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
#include<stdio.h>
int main()
{
	int i = 1;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
			sum += 1.0 / i;//���1/iʱ Ҫ��1д��float���� 1.0  ����1����2����0
		else
			sum -= 1.0 / i;
	}
	printf("sum=%lf\n", sum);
	return 0;
}