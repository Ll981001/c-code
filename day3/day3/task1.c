#define _CRT_SECURE_NO_WARNINGS 1
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include<stdio.h>
#include<string.h>
//���ð�λ�����
int main()
{
	int a[] = {1,2,3,5,6,78,9,10};
	int b[] = {13,23,34,54,6,67,8,24};
	int len = sizeof(a) / sizeof(a[1]);
	int i = 0;
	printf("����ǰa[]=");
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("����ǰb[]=");
	for (i = 0; i < len; i++)
		printf("%d ", b[i]);
	for (i = 0; i < len; i++)
	{
		a[i] = a[i] ^ b[i];
		b[i] = a[i] ^ b[i];
		a[i] = a[i] ^ b[i];
	}
	printf("\n");
	printf("������a[]=");
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("������b[]=");
	for (i = 0; i < len; i++)
		printf("%d ", b[i]);
	return 0;
}