#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//��ʾ����ַ��������ƶ������м���
int main()
{
	char arr1[] = { 'W','e','l','c','o','m','e',' ','t','o',' ','w','o','r','l','d','!','!','!','!','\0' };
	char arr2[] = { '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','\0' };
	int sz = sizeof(arr1) / sizeof(arr1[1]);  //��ʱszΪ21 �Ὣ'\0'��¼���� �������һ���ַ�Ӧ��sz-2��ʼ
	//����strlen��������
	int i = 0, j = sz - 1;
	printf("%s\n", arr2);
	Sleep(500);
	system("cls");//system("cls") ִ��ϵͳ����ĺ��� -cls -�����Ļ
	for (int i = 0, j = sz - 2; i <= j; i++, j--)
	{
		arr2[i] = arr1[i];
		arr2[j] = arr1[j];
		printf("%s\n", arr2);
		Sleep(500);
		system("cls");
	}
	printf("%s\n", arr2);
	return 0;
}