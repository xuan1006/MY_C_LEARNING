#include <stdio.h>

int main(){
	int i=0,j=0,num=0;
	
	scanf("%d",&num);
	num=num*2-1;
	
	for(i=0;i<num;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=0;j<num-2*i;j++){
			if(j==0||j==num-1-2*i||i==0){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
