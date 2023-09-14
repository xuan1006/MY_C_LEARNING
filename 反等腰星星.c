#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0,j=0,k=0; 
	scanf("%d",&j);
	
	for(i=0;i<j;i++){
		for(k=0;k<=i-1;k++){
			printf(" ");
		}
		for(k=2*i-1;k<=j;k++){
			printf("*");
		}
		printf("\n");
	}
} 
