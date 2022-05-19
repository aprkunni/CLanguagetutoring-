#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	//for (int i = 0 ; i< 10 ; i++) printf("%d번째 안아줘요\n", i);
	//int i = 0;
	//while (i < 10){
	//	i++;
	//	printf("%d번째 안아줘요\n", i);
	//}

	//do {
	//	printf("%d번째 안아줘요\n", i);
	//	i++;
	//} while (i< 10);

	//while (1){
	//	printf("%d번째 안아줘요\n", i);
	//	i++;
	//	if (i > 50) {
	//		break;
	//	}
		

	//}
	/*int i = 0;
	while (i < 100){
		i++;
		if (i < 20)continue;
		printf("%d번째 안아줘요\n", i);

	}*/
	//int i = 1;
	//for (i;  i <10;) {
	//	int k = 1;
	//	for (k; k <10;) {
	//		printf("%d\n", i * k);
	//		k++;
	//	}
	//	i++;
	//}
	//int x = 0;
	//while (1){
	//	x++;
	//	for (int y = 0; y < 10; y++)printf("%d X %d = %d\n", x, y, x * y);
	//	if (x == 9)break;
	//}
	//int num;
	//int user;
	//
	//while (1){
	//	printf("가위 1 바위 2 보 3 : ");
	//	scanf("%d", &user);
	//	num = rand() % 3 + 1;
	//	if(user == 1){

	//	}
	//}
	//printf("님 이김");
	//return 0;
	/*int num = 1;
	while (num < 100){
		num++;
		if (num % 2 == 1) continue;
		printf("짝수 %d\n", num);
	}*/

//	int num = 0;
//again:
//	printf("%d", num);
//	num++;
//	if (num > 100) goto end;
//	goto again;
//	end:
//	return 0;
	int x;
	printf("몇단을 표현 할 것인가.? : ");
	scanf_s("%d", &x);
	int y = 1;
	again:
	if (y > 9) {
		goto end;
	}
	printf("%d X %d = %d\n", x, y, x * y);
	y++;
	goto again;

	end:
	return 0;

}