#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
	char name[80];
	printf("請輸入名子:");
	scanf("%s", name);
	printf("Hello %s", name);
	return 0;
}
