#include <stdio.h>

int main(){
	char *infname="RnJ.txt";
	char line[200];
	char ch;
	int count=0;
	FILE *inf=fopen(infname,"rt");
	
	while(feof(inf)==0){
		ch=fgetc(inf);
		printf("%c",ch);
		count++;
	}
	
	printf("%d",count);
	
	fclose(inf);
	
} 
