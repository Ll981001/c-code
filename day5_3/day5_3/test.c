#define _CRT_SECURE_NO_WARNINGS 1
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = {0};
	int count = 3;
	while (count)
	{
	printf("���������루��ǰ����%d/3)\n", 4-count);
	scanf("%s", &input);
	count--;
	if (strcmp(input, "123456") == 0)
	{
		printf("��¼�ɹ�\n");
		break;
	}
	}
	if (!count)
	{
		printf("����������࣬�˳�����\n");
	}

}