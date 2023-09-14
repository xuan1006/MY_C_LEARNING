#include <stdio.h>

int main(){
	int i=0,k=0,count=0;
	char str[80];
	
	while(1){
		printf("¿é¤J:");
		scanf("%s",str);
		if(str[0]=='Z'){
			break;
		}
		while(str[i]!='\0'){
			count++;
			i++;
		}
		printf("%d\n",count);
	} 
}
