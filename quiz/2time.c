#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char a,b;
	
	printf("a/ ���� b/���� c/�� (�ڱ�): ");
	scanf("%c", &a);
	scanf("%*c");
	printf("a/ ���� b/���� c/�� (���): ");
	scanf("%c", &b);

	if ((b == 'a' && a == 'a') || ( b == 'b' && a == 'b') || (b == 'c' && a == 'c')) {
		printf("���");
	}
	else if ((b == 'a' && a == 'b') || (b == 'b' && a == 'c') || (b == 'c' && a == 'a')) {
		printf("�̱�");
	}
	else
	{
		printf("��");
	}
	return 0;
}