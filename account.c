#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Account Account;
struct Account{
	char *username;
	char *id;
	int money;
	Account *next;
};
int select=-1;
int numberOfAccount=0;
int addAccount();  //return 0 if failed
int deleAccount(char *id);
void traversal(Account *head);
void showMenu();
void SearchById(char *id);
void FreeAllNodes();
Account *head;
int main(){
//	Account front={"","",0,NULL};
//	head=&front;
	head=(Account*)malloc(sizeof(Account));
	head->id=(char*)malloc(sizeof(char)*12);
	head->username=(char*)malloc(sizeof(char)*20);
	head->next=NULL;
	while(1){
		showMenu();
		if(select==1){
			if(!addAccount()) printf("添加失敗\n");
			numberOfAccount++;
			system("pause");
			system("cls");
		}else if(select==2){
			char *id=(char*)malloc(sizeof(char)*12);
			printf("請輸入要刪除之人的ID:");
			scanf("%s",id);
			if(deleAccount(id)){
				printf("刪除成功!\n");
			}else printf("查無此人!\n");
			free(id);
			system("pause");
			system("cls");
		}else if(select==3){
			traversal(head);
			system("pause");
			system("cls");
		}else if(select==4){
			char *id=(char*)malloc(sizeof(char)*12);
			printf("請輸入要查找之人的ID:");
			scanf("%s",id);
			SearchById(id);
			system("pause");
			system("cls");
			free(id);
		}else if(select==0){
			FreeAllNodes();
			printf("謝謝使用!");
			break;
		}else{
			printf("輸入有誤，請重新輸入!\n");
			fflush(stdin);
			system("pause");
			system("cls");
			showMenu();
		}
		
	}
	return 0;
}

void showMenu(){
	printf("******************\n");
	printf("1) 新增帳戶\n\n");
	printf("2) 刪除帳戶\n\n");
	printf("3) 遍歷所有帳戶資料\n\n");
	printf("4) ID查詢帳戶\n\n");
	printf("0) 退出服務\n\n");
	printf("******************\n");
	printf("選擇需要的服務:");
	scanf("%d",&select);
	system("cls");
}

int addAccount(){
	Account *ptr=head;
	int money=0;
	char name[20],id[12];
	printf("請輸入姓名:");
	scanf("%s",name);
	printf("請輸入ID:");
	scanf("%s",id);
	printf("請輸入餘額:");
	scanf("%d",&money);	
	while(ptr->next!=NULL){ //若當前ptr為存在node,比較id
		if(strcmp(ptr->id,id)==0) return 0;
		ptr=ptr->next;
	}
	Account *user=(Account*)malloc(sizeof(Account)); //新node
	user->username = (char*)malloc(20 * sizeof(char)); // 為username分配記憶體
	user->id = (char*)malloc(12 * sizeof(char)); // 為id分配記憶體
	strcpy(user->username,name); 
	strcpy(user->id,id);
	user->money=money;
	ptr->next=user;
	user->next=NULL;
	return 1;
}


void traversal(Account *head){
	if(head->next==NULL){   //若無資料
		printf("當前並無資料!");
		return;
	}
	printf("共搜索到%d筆資料\n\n",numberOfAccount);
	Account *ptr=head->next; //將ptr指向第一筆資料
	while(ptr!=NULL){
		printf("***********************\n");
		printf("Username:%s\n",ptr->username);
		printf("Id:%s\n",ptr->id);
		printf("Money:%d\n",ptr->money);
		printf("***********************\n");
		ptr=ptr->next;
	}
}

void SearchById(char *id){
	Account *ptr=head;
	while(1){
		if(strcmp(ptr->id,id)==0){
			printf("查詢成功!\n\n");
			printf("***********************\n");
			printf("Username:%s\n",ptr->username);
			printf("Id:%s\n",ptr->id);
			printf("Money:%d\n",ptr->money);
			printf("***********************\n");
			return;
		}
		if(ptr->next==NULL) break;
		ptr=ptr->next;
	}
	printf("查無此帳戶!\n");
}

int deleAccount(char *id){
	Account *ptr=head;
	    while(ptr->next != NULL){  // 當前節點的下一個節點不為 NULL
	        if(strcmp(ptr->next->id,id)==0){  // 找到要刪除的節點
	            Account *temp=ptr->next;
	            ptr->next=temp->next;
	            free(temp);
	            return 1;
	        }
	        ptr=ptr->next;
	    }
	return 0;  // 沒有找到對應的 id
}

void FreeAllNodes() {
	Account *target=head;
	Account *current;
	while(target->next!=NULL){
		current=target->next;
		free(target->id);
		free(target->username);
		free(target);
		target=current;
	}
	
	free(target->id);         
	free(target->username);
	free(target);
}
