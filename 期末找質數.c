#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=2,k=2,num=100;
	int count=0,sum=0;

	while(1){
		for(i=2;i<k;i++){
			if(k%i==0){
				count++;
			}
		}
		if(count==0){
			if(k>100&&k<200){
				printf("%d\n",k);
			}
		}
		if(k==199){
			break;
		}
		k++;
		count=0;
	}
}
