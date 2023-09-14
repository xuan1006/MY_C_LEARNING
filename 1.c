#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
typedef struct tagHealthProfile Profile;
struct tagHealthProfile{
    char name[32];
    char gender;
    int b_year;
    int b_month;
    int b_day;
    float height;  
    float weight; 
   	Profile* next;
};
Profile* getProfileByIndex(Profile *head,int index);//獲取指定Profile
void showProfile(Profile *head); 
void Add_Profile(
    Profile* head,
    char* name,
    char gender,
    int birthYear,
    int birthMonth,
    int birthDay,
    float height,
    float weight
);
int Load_profile(FILE *f,Profile *head); //載入檔案
int main(){
	FILE *f=NULL;
	Profile *head=(Profile*)malloc(sizeof(Profile)); head->next=NULL;
	if(Load_profile(f,head)==-1)return -1;
	showProfile(head);
	return 0;	
}

void Add_Profile(Profile* head,char* name,char gender,int birthYear,int birthMonth,int birthDay,float height,float weight){
	Profile *current=head;
	//將指標指向最後一位
	while(current->next!=NULL)current=current->next; 
	current->next=(Profile*)malloc(sizeof(Profile));

	*(current->next)=(Profile){  //初始化
		.gender=gender,
		.b_year=birthYear, 
		.next=NULL
	};
	strcpy(current->next->name,name); //名
}
int Load_profile(FILE *f,Profile *head){
	f=fopen("plist.txt","r");
	if(f==NULL){ 
		printf("FileNotFoundException!");
		return -1;
	} 
	char name[32],gender;
	int y,m,d;
	float w,h;
	while(!feof(f)){
		fgets(name,32,f);
		fscanf(f,"%c\n",&gender);
		fscanf(f,"%d %d %d\n",&y,&m,&d);
		fscanf(f,"%f\n%f\n",&h,&w);
		Add_Profile(head,name,gender,y,m,d,h,w);
	}
	fclose(f);
	return 0;
}
void showProfile(Profile *head){
	if(head==NULL) printf("NullPointerException!");
	Profile *current=head->next;
	while(current!=NULL){
		printf("*****************\n");
		printf("Name:%s",current->name);
		printf("Gender:%c\n",current->gender);
		printf("Birth:%d/%d/%d\n",current->b_month,current->b_day,current->b_year);
		printf("Height:%.1f(cm)\n",current->height);
		printf("Weight:%.1f(kg)\n",current->weight);
		printf("*****************\n");
		current=current->next;
	}
}

Profile* getProfileByIndex(Profile *head,int index){  
	if(head==NULL)printf("NullPointerException!");
	int currentIndex=1;
	Profile *current=head->next;
	while(current!=NULL&&currentIndex<index){
		current=current->next;
		currentIndex++;
	}
	if(current==NULL){
		printf("IndexOutOfRangeException");
		return NULL;
	}
	printf("查詢成功!");
	return current;
}
