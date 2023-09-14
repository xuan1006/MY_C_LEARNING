#include <stdio.h>
#include <stdlib.h>

int main(){
	int n=3,d=4,count=0;
	
	while(count!=10){
		printf("%d\n",n);
		n=n*d;
		count++;
	}
}
