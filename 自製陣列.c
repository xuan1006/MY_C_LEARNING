#include <stdio.h>
#include <stdlib.h>

int main(){
	int num[4];
	int n=0,i=0;
	
	for(i=0;i<4;i++){
		printf("��J��%d�Ӧ��Z:",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<4;i++){
		num[i]+=20;
		if(num[i]>100){
			num[i]=100;
		}
		printf("��%d�Ӧ��Z:%d\n",i+1,num[i]);
	}
}
