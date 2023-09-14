#include <stdio.h>
#include <stdlib.h>

int main(){
	int list[100];
	int i=0,sum=0;
	
	for(i=0;i<100;i++){
		list[i]=5+(5*i);
		printf("²Ä%d¶µ:%d\n",i+1,list[i]);
	}
	for(i=0;i<100;i++){
		sum+=list[i];
	}
	printf("add=%d",sum);
}
