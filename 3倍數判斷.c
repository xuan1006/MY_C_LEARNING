#include <stdlib.h>
#include <stdio.h>

int main(){
	int num=0;
	
	while(1){
		printf("��J:");
		scanf("%d",&num);
		if(num==999){
			break;
		}
		if(num%3==0){
			printf("3Y\n");
		}
		else{
			printf("3N\n");
		}

	}
}
