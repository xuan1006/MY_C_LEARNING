#include <stdio.h>
#include <stdlib.h>


int main(){
	int num=0,k=0,i=0;
	int div=0,count=0;
	int sum=0;
	
	printf("��J");
	scanf("%d",&num);
	
	for(div=2;num>div;div++){
		if(num%div==0){
			count++;
			break;
		}
	}
	if(count==0){
		printf("�O���");
	}
	else{
		printf("���O���");
	}

}
