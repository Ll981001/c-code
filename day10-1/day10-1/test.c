#define _CRT_SECURE_NO_WARNINGS 1

//дһ���������ز����������� 1 �ĸ���
//���磺 15       0000 1111       4 �� 1
//����ԭ�ͣ�
int  count_one_bits(unsigned int value)
{
	// ���� 1��λ��
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((value>>i) & 1 == 1)
		{
			count++;
		}
	}
	return count;

}
#include<stdio.h>
int main()
{
	unsigned int input = 0;
	printf("������һ����������");
	scanf("%d",&input);
	int count =count_one_bits(input);
	printf("��������1��λ����%d\n",count);
	return 0;
}
