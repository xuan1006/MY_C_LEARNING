#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[50]="str.txt";
	FILE *fs=fopen(str,"w");
	int i=0,is=1;
	char strer[50]={0};
	gets(strer);
	
	for(i=0;i<strlen(strer)/2;i++){
		if(str[strlen(strer)-i-1]!=str[i]){
			is=0;
			break ;
		}
	}
	if(is==1){
		printf("是回文");	
	}else
		printf("不是回文");
	fprintf(fs,"%s\n",strer);
	fclose(fs);
}
