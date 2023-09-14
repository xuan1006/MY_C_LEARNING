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
			if(!addAccount()) printf("�K�[����\n");
			numberOfAccount++;
			system("pause");
			system("cls");
		}else if(select==2){
			char *id=(char*)malloc(sizeof(char)*12);
			printf("�п�J�n�R�����H��ID:");
			scanf("%s",id);
			if(deleAccount(id)){
				printf("�R�����\!\n");
			}else printf("�d�L���H!\n");
			free(id);
			system("pause");
			system("cls");
		}else if(select==3){
			traversal(head);
			system("pause");
			system("cls");
		}else if(select==4){
			char *id=(char*)malloc(sizeof(char)*12);
			printf("�п�J�n�d�䤧�H��ID:");
			scanf("%s",id);
			SearchById(id);
			system("pause");
			system("cls");
			free(id);
		}else if(select==0){
			FreeAllNodes();
			printf("���¨ϥ�!");
			break;
		}else{
			printf("��J���~�A�Э��s��J!\n");
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
	printf("1) �s�W�b��\n\n");
	printf("2) �R���b��\n\n");
	printf("3) �M���Ҧ��b����\n\n");
	printf("4) ID�d�߱b��\n\n");
	printf("0) �h�X�A��\n\n");
	printf("******************\n");
	printf("��ܻݭn���A��:");
	scanf("%d",&select);
	system("cls");
}

int addAccount(){
	Account *ptr=head;
	int money=0;
	char name[20],id[12];
	printf("�п�J�m�W:");
	scanf("%s",name);
	printf("�п�JID:");
	scanf("%s",id);
	printf("�п�J�l�B:");
	scanf("%d",&money);	
	while(ptr->next!=NULL){ //�Y��eptr���s�bnode,���id
		if(strcmp(ptr->id,id)==0) return 0;
		ptr=ptr->next;
	}
	Account *user=(Account*)malloc(sizeof(Account)); //�snode
	user->username = (char*)malloc(20 * sizeof(char)); // ��username���t�O����
	user->id = (char*)malloc(12 * sizeof(char)); // ��id���t�O����
	strcpy(user->username,name); 
	strcpy(user->id,id);
	user->money=money;
	ptr->next=user;
	user->next=NULL;
	return 1;
}


void traversal(Account *head){
	if(head->next==NULL){   //�Y�L���
		printf("��e�õL���!");
		return;
	}
	printf("�@�j����%d�����\n\n",numberOfAccount);
	Account *ptr=head->next; //�Nptr���V�Ĥ@�����
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
			printf("�d�ߦ��\!\n\n");
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
	printf("�d�L���b��!\n");
}

int deleAccount(char *id){
	Account *ptr=head;
	    while(ptr->next != NULL){  // ��e�`�I���U�@�Ӹ`�I���� NULL
	        if(strcmp(ptr->next->id,id)==0){  // ���n�R�����`�I
	            Account *temp=ptr->next;
	            ptr->next=temp->next;
	            free(temp);
	            return 1;
	        }
	        ptr=ptr->next;
	    }
	return 0;  // �S���������� id
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
