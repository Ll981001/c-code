#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//��д��¼�����û�������������
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", &password);
		if (strcmp(password,"123456")==0 )//(==)���ܱȽ������ַ���  �Ƚ��ַ���Ҫ�ú���strcmp���������ַ�����ͬ����ֵΪ��
		{
			printf("������ȷ");
			break;
		}
	}
	if (i == 3)
		printf("�޷���¼");

	return 0;
}