#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char name[30];
	char sex;
	int year;

	printf("�̸��� �Է��ϼ���: ");
	gets_s(name, 30);
	printf("������ �Է��ϼ���: ");
	sex = getchar();
	printf("ź���⵵�� �Է��ϼ���: ");
	scanf("%d", &year);

	puts(name);
	putchar(sex);
	printf("\n%d", year);

}