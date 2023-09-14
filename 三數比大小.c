#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=0,b=0,c=0;
	int max=0;
	
	printf("¿é¤Ja:");
	scanf("%d",&a);
	printf("¿é¤Jb:");
	scanf("%d",&b);
	printf("¿é¤Jc:");
	scanf("%d",&c);
	
	if(max<a){
		max=a;
	}
	if(max<b){
		max=b;
	}
	if(max<c){
		max=c;
	}
	printf("%d",max);
}
