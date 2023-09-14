#include <stdio.h>

int main(){
	int num[5]={0,2,4,6,8};
	int i=0,j=0,k=0;
	int ii=0,jj=0,kk=0;
	int count=0;
	
	for(i=0;i<5;i++){
		ii=num[i];
		if(ii==0){
			continue;
		}
		for(j=0;j<5;j++){
			jj=num[j];
			for(k=0;k<5;k++){
				kk=num[k];
				if((ii==jj||jj==kk||ii==kk)&&!(ii==jj&&ii==kk&&jj==kk)){
					printf("%d%d%d\n",ii,jj,kk);
					count++;
				}
			}
		}
	}
	printf("%d",count);
}
