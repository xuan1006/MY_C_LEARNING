#include <stdio.h>
#include <stdlib.h>
int my_pow(int, int);
void main(){
	int a=0, b=0;
	printf("請輸入要求多少的次方:");
	scanf("%d%d", &a, &b);
	printf("pow=%d\n", my_pow(a, b));
}
int my_pow(int x, int y){
	int i=0, sum=1;
	for(i=0; i<y; i++){
		sum=sum*x;
	}
	return sum;
}
