#include <stdio.h>
#include <stdlib.h>
int main(){
	char *fname="contacts.txt";
	FILE *inf=fopen(fname,"rt");
	char str[1000+1];
	char name[50];
	char job[50];
	char ch='M';
	char phone[50];
	char email[50];
	int num=0;	
	int freq[2]={0};
	
	fgets(str,1001,inf);
	printf("%s",str);
	
	while(!feof(inf)){
		printf("=============\n");
		fgets(name, 50,inf);
		printf("Name:%s",name);
		fgets(job,50,inf);
		printf("Job:%s",job);
		fscanf(inf,"CH:%c",&ch);
		if(ch=='M'){
			freq[0]++;
		}else{
			freq[1]++;
		}
		printf("%c",ch);
		fgets(phone,50,inf);
		printf("TEL:%s",phone);
		fgets(email,50,inf);
		printf("E-mail:%s",email);
		fscanf(inf,"%d",&num);
		printf("Totle:%d\n",num);
	}
	fclose(inf);
	return 0;
}
