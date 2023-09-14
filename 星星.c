#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0,j = 0,k=3;
	for(j=0;j<=4;j++){
		for(i = 0; i < 4-j ; i++){
			printf(" ");
		}
		for(i=0;i<2*j-1;i++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
