#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[50]={};
	int i=0,is=1;
	gets(str);
	for(i=0;i<strlen(str)/2;i++){
		if(str[strlen(str)-i-1]!=str[i]){
			is=0;
			break ;
		}
	}
	if(is){
		printf("是回文");	
	}else
		printf("不是回文");
}
