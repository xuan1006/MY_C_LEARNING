#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0, freq[5]={0};
	int sc=0;
	int scores[20]={90, 59, 78, 71, 39, 0, 19, 85, 77, 84,
					91, 98,38, 66, 65, 88, 63, 85, 18, 0};
	
	for(i=0;i<20;i++){
		sc=scores[i];
		if(sc>=0&&sc<20)
			freq[0]++;
		if(sc>=20&&sc<40)
			freq[1]++;
		if(sc>=40&&sc<60)
			freq[2]++;
		if(sc>=60&&sc<80)
			freq[3]++;
		if(sc>=80&&sc<100)
			freq[4]++;
	}
	for(i=0;i<5;i++){
		printf("第%d個區間有%d個",i,freq[i]);
		printf("\n");
	}
} 
