#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b);
int main(){
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	printf("%d",gcd(a,b));
	return 0;
}
int gcd(int a,int b){
	int r;
	r=a%b;
	if(r==0){
		return b;
	}else gcd(b,r);
}
