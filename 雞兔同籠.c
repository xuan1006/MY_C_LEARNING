#include <stdio.h>


int main(){
	int h=40,l=100;
	int i=0;
	
	for(i=0;i<=h;i++){
		if(i*2+(40-i)*4 == l){
			pritnf("%d°¦Âû%d°¦Âû", i, (40-i));
		}
	}
	return 0;
}
