#define _CRT_SECURE_NO_WARNINGS 1
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
#include<stdio.h>
int main()
{
	int ch = 0;
	printf("������ʵ�ִ�Сд��ĸת�����������ַ�%\n"); 
	while (1)
	{
		ch = getchar();
		if ((ch >= 'A')&&(ch <= 'Z'))
			printf("%c\n", ch + 32);//%c �ַ�����  %s�ַ�������
		else if ((ch >= 'a')&&(ch <= 'z'))
			printf("%c\n", ch - 32);
		
	}
	return 0;
}