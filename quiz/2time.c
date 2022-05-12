#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char a,b;
	
	printf("a/ 가위 b/바위 c/보 (자기): ");
	scanf("%c", &a);
	scanf("%*c");
	printf("a/ 가위 b/바위 c/보 (상대): ");
	scanf("%c", &b);

	if ((b == 'a' && a == 'a') || ( b == 'b' && a == 'b') || (b == 'c' && a == 'c')) {
		printf("비김");
	}
	else if ((b == 'a' && a == 'b') || (b == 'b' && a == 'c') || (b == 'c' && a == 'a')) {
		printf("이김");
	}
	else
	{
		printf("짐");
	}
	return 0;
}