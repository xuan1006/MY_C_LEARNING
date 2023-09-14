#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int ii=0,jj=0,kk=0;
	int sum=0,i=0;
	
	for(i=100;i<1000;i++){
		if((pow(i/100,3)+(pow(i/10%10,3))+(pow(i%10,3))==i))
			printf("%d\n",i);
	}
}
