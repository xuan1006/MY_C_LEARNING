#include <stdio.h>
#include <stdlib.h>

int main(){
    int scores[20] = {90, 59, 78, 71, 39, 0, 19, 85, 77, 84, 
                      91, 98, 38, 66, 65, 88, 63, 85, 18, 0};
    int i=0,freq[5]={};
    for(i=0;i<20;i++){
		if(scores[i]<20&&scores[i]>=0){
			freq[0]++;
		}else if(scores[i]>=20&&scores[i]<40){
			freq[1]++;
		}else if(scores[i]>=40&&scores[i]<60){
			freq[2]++;
		}else if(scores[i]>=60&&scores[i]<80){
			freq[3]++;
		}else if(scores[i]>=80&&scores[i]<100){
			freq[4]++;
		}
	}
	for(i=0;i<5;i++){
		printf("第%d個區間有%d個\n",i+1,freq[i]);
	}
    
}
