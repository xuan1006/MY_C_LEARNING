#include <stdio.h>
#include <stdlib.h>
int main(void){
	int a = 0, i = 0, k = 0;
	printf("�п�J�Ʀr:");
	scanf("%d", &a);
	while(1 < a){
		for(i = 2; i < a; i++){
			if(a % i == 0){
				k++;
				break;
			}
		}
		if(k == 0){
			printf("%d\n", a);
		}
		k = 0;
		a--;
	}
	return 0;
}
