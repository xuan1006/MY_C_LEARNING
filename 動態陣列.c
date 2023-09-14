#include <stdio.h>

typedef struct tagNode {
    int data;
    struct tagNode* next;
} NODE;

NODE* make_node(int data);
int length(NODE* head);
void show_list(NODE* head);
NODE* add_head(NODE* head, NODE* node);
NODE* add_tail(NODE* head, NODE* node);
NODE* add_after(NODE* head, NODE* node, int index);  // 0-based index
NODE* del_head(NODE* head);
NODE* del_tail(NODE* head);
//NODE* del_after(NODE* head, int position);

int main() {
    NODE* head=NULL;
    NODE* node=NULL;
    NODE* prev_node=NULL;
    NODE* current=NULL;
    int val=1, count=100, i=0;

    node = make_node(9);
    head = add_head(head, node);
    node = make_node(99);
    head = add_head(head, node);
    node = make_node(999);
    head = add_head(head, node);
    node = make_node(111);
    head = add_tail(head, node);
    node = make_node(11);
    head = add_tail(head, node);
    node = make_node(1);
    head = add_tail(head, node);
    node = make_node(222);
    head = add_after(head, node, 3);
    node = make_node(22);
    head = add_after(head, node, 4);
    
    head = del_head(head);
    head = del_head(head);
    head = del_tail(head);
    head = del_tail(head);
    show_list(head);
    
    return 0;
}

NODE* make_node(int data) {
    NODE* node=NULL;

    node = malloc(sizeof(NODE));
    node->data = data;
    node->next = NULL;
    return node;
}

int length(NODE* head) {
    int count=0;
    NODE* current=NULL;

    // from head to the end of list
    current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void show_list(NODE* head) {
    NODE* current=NULL;

    // from head to the end of list
    current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

NODE* add_head(NODE* head, NODE* node) {
    if (node == NULL)
        return head;
    if (head == NULL) {
        head = node;
        return head;
    }
    //else {
        node->next = head;
        head = node;
        return head;
    //}
}

NODE* add_tail(NODE* head, NODE* node) {
	NODE* current=NULL;
	if (node == NULL)
	    return head;
	if (head == NULL) {
	    head = node;
	    return head;
	}
    // find tail
    current = head;    // head!=NULL
    while (current->next != NULL) {
    	current = current->next;
    }
    // current is tail
    current->next= node;

    return head;
}
 
NODE* add_after(NODE* head, NODE* node, int index) {  // 0-based index
    NODE* current=NULL;
    int i=0;

    if (node==NULL || head==NULL || index>=length(head))
        return head;
    // locate index
    current = head;    // head!=NULL
    for (i=0; i<index; i++) {
         current = current->next;
    }
    node->next = current->next;
    current->next = node;

    return head;
}

NODE* del_head(NODE* head) {
    NODE* temp=head;

    if (head==NULL)
        return NULL;
    head = head->next;
    free(temp);

    return head;
}

NODE* del_tail(NODE* head) {
    NODE* current;
    NODE *prev=NULL;

    if (head==NULL)
        return NULL;
    // find tail
    current = head;    // head!=NULL
    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }
    free(current);
    
    if (prev != NULL)
         prev->next = NULL;
    else
        head = NULL;
    
    return head;
}
