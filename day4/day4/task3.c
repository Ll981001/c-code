#define _CRT_SECURE_NO_WARNINGS 1
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
#include<stdio.h>
#include<math.h>
int main()
{
	int sum = 0;
	int a = 0;
	printf("������һ�����֣�");
	scanf("%d", &a);
	int temp = a;
	a = 0;
	for (int i = 1; i <= 5; i++)
	{
		a += temp * pow(10, i - 1);
		sum += a;
	}
	printf("%d", sum);
	return 0;
}
