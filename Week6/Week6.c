#include<stdio.h>
int main() {
	//for (int i = 0 ; i< 10 ; i++) printf("%d��° �Ⱦ����\n", i);
	//int i = 0;
	//while (i < 10){
	//	i++;
	//	printf("%d��° �Ⱦ����\n", i);
	//}

	//do {
	//	printf("%d��° �Ⱦ����\n", i);
	//	i++;
	//} while (i< 10);

	//while (1){
	//	printf("%d��° �Ⱦ����\n", i);
	//	i++;
	//	if (i > 50) {
	//		break;
	//	}
		

	//}
	/*int i = 0;
	while (i < 100){
		i++;
		if (i < 20)continue;
		printf("%d��° �Ⱦ����\n", i);

	}*/
	int i = 1;
	for (i;  i <10;) {
		int k = 1;
		for (k; k <10;) {
			printf("%d\n", i * k);
			k++;
		}
		i++;
	}
	return 0;
}