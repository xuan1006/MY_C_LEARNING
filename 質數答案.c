#include <stdio.h>

int main(void){
	int num = 0, total = 0, i = 2, j = 0, k = 0;
	printf("�п�J�Ʀr:");
	scanf("%d", &num);
	while(1){
		for(j = 2; j < i; j++){
			if(i % j == 0){
				k++;
				break;
			}
		}
		if(k == 0){
			printf("%d\n", i);
			total++;
		}
		k = 0;
		if(total == num){
			break;
		}
		i++;
	}
	return 0;
}
