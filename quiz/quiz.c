#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char name[30];
	char sex;
	int year;

	printf("이름을 입력하세요: ");
	gets_s(name, 30);
	printf("성별을 입력하세요: ");
	sex = getchar();
	printf("탄생년도를 입력하세요: ");
	scanf("%d", &year);

	puts(name);
	putchar(sex);
	printf("\n%d", year);

}