#include <stdio.h>
#include <stdlib.h>

int main(){
	int n=0,count=0,i=0;
	int num=1,sum=0;
	
	printf("��J:");
	scanff("%d",&n);
	
	while(count<n){
		sum=0;
		for(i=1;i<num;i++){
			if(num%i==0){
				sum+=i;
			}
		}
		if(num==sum){
			printf("������:%d\n",num);
			count+=1;
		}
		num++;
	}
}
