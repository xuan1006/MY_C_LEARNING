#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,k; //j�O�ܼơAI�O�ĴX�h 
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
