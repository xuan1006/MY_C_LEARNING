#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,k; //j是變數，I是第幾層 
	scanf("%d",&j);
	for( i=0;i<=j;i++){
		for(k=0; k<j - i; k++){
			printf(" ");
		}
		for(k=0;k<2*i+1;k++){
			printf("*");
		} 
		printf("\n");
	}
} 
