#include <stdio.h>
#include <stdlib.h>

int main(){
	float y=0,x=0;
	float area=0,add=0;
	
	printf("輸入長:");
	scanf("%f",&x);
	printf("輸入寬:");
	scanf("%f",&y);

	add=((x+y)*2);
	printf("周長:%f\n",add);
	
	area=x*y;
	printf("面積:%f",area);
}
