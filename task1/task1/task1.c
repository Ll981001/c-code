#include<stdio.h>
//���100-200֮�������
int main()
{
	int j;
	int i;
	for (j = 100; j <= 200; j++)
	{
		int flag = 1;//���ñ�־λ�ж�j�Ƿ�������
		for (i = 2; i < j; i++)
		{
			if (j%i == 0) flag = 0;//�ж����Ƿ��ܱ�1��������֮���������
		}
		if (flag == 1) printf("%d\n", j);

	}
	return 0;
}