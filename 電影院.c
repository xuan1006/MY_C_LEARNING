#include <stdio.h>
#include <stdlib.h>m
void allmoney(int *big,int *small,int num){
	int i=0;
	for(i=0;i<num;i++){
		printf("��X��%d�����:%d\n",i+1,(*(big+i))*250+(*(small+i))*175);
	}
}
int main(){
	int i=0,num=0;
	int *big=(int*)malloc(sizeof(int)*num);
	int *small=(int*)malloc(sizeof(int)*num);
	printf("��J�X�����\n");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("��J�����A�b��\n");
		scanf("%d%d",big+i,small+i);
	}
	allmoney(big,small,num);
}
