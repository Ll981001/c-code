#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������������С�����˳�����
int main4()
{
	int a;
	int b;
	int c;
	int temp;
	scanf("%d%d%d", &a,&b,&c);//����ʱ�����ÿո� �س� teb ����
	//scanf("%4d", &temp);//��ʱ�������������Ŀ��Ϊ4
	if (a < b) // if ������ֻ��һ�д��� �����ʡ�Դ�����
	{
		temp = a;//��ʱ����Ҫ������
		a = b;
		b = temp;
	}
	if (a < c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d>%d>%d", a, b, c);		
	return 0;
}