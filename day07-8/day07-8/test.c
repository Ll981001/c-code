#define _CRT_SECURE_NO_WARNINGS 1
//��һ�������洢���ڴ��еĶ�������1�ĸ���
#include<stdio.h>
int main()
{
	int num = 10;
	printf("������һ��������");
	scanf("%d", &num);
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num>>i) & 1) == 1)
		{
			count++;
		}
		
	}
	printf("%d", count);
	return 0;
}