#include <stdio.h>
#include <stdlib.h>
typedef struct student{
	char name[50];
	char job[50];
//	char n;
//	char phone[20];
//	char email[50];
//	int time;
} std;
int main(){
	std p1;
	printf("plz enter your name:");
	scanf("%s", p1.name);
	printf("plz enter your job:");
	scanf("%s", p1.job);
	printf("%s job is %s\n", p1.name, p1.job);
	return 0;
}
