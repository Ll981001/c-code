#define _CRT_SECURE_NO_WARNINGS 1
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9��
#include<stdio.h>
int Count(int x, int y)
{
	int i;
	int cnt = 0;
	for (i = x; i <= y; i++)
	{
		if (i / 10 == 9 || i % 10 == 9)//i/10��i��ʮλ���֣�i%10��i�ĸ�λ���� 
			cnt++;
	}
	return cnt;
}

int main()
{ 
	int count;
	count=Count(1, 100);
	printf("%d\n", count);
	return 0;
}