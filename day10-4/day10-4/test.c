#define _CRT_SECURE_NO_WARNINGS 1

//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У�
//�ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
#include<stdio.h>

int main()
{
	int input1 = 0;
	int input2 = 0;
	printf("����������������");
	// 111 1100 1111---1999
	//1000 1111 1011---2299
	scanf("%d%d", &input1,&input2);
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((input1 >> i) & 1) != ((input2 >> i) & 1))
		{
			count++;
		}

	}
	printf("%d", count);
	return 0;
}