#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, num[10],total=10,num2[10];
	
	printf("�H������0~100�@10�ӼƦr: ");
	for (i=0; i<10; i++){
		num[i] = rand()%101;
		printf("%d ", num[i]);
	} 
	printf("\n");
	
	for(i=0;i<10;i++){
		num2[i]=num[total-i-1];
	}
	for(i=0;i<10;i++){
		printf("%d  ",num2[i]);
	}
	
	return 0;
}
