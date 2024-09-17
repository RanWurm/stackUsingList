#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int capacity;
    int x;
    char y;
    char* z;
    struct node* next;
}node;

node* create (int a, char y, char* z,int cap) {
    node* newNode = (node*) malloc(sizeof (node));
    if (newNode == NULL)
        exit(0);
    newNode->capacity = cap;
    newNode->x = a;
    newNode->y = y;
    newNode ->z = z;
    newNode->next = NULL;

    return newNode;
}
void addNode(node** head, node* toAdd){

    if( *head != NULL && toAdd != NULL){
        if(((*head)->capacity) == 0){
            printf("stack is full,push has failed!\n");
            return;
        }

        toAdd->capacity = (*head)->capacity - 1;
        node* tmp =toAdd;
        (*head) ->next = toAdd->next;
        tmp->next = (*head);
        *head = tmp;
    }
}
node* pop (node** head){
    node *toReturn = NULL;

    if(*head != NULL){
        toReturn = *head;
        *head = (*head)->next;
    }
    return toReturn;
}

int isEmpty(node* list){
    if (list == NULL){
        return 1;
    }
    return 0;
}

void peek(node* stack) {
    if (!isEmpty(stack) ) {
        printf("int val is: %d\nchar val is:%c\nchar pointer val is:%c\n",
               stack->x, stack->y, *(stack->z));
    } else{
        printf("stack is empty!\n");
    }
}

int size(node* list){
    int counter = 0;
    node* tmp = list;
    while (tmp !=NULL){
        counter++;
        tmp = tmp->next;
    }
    return counter;
}

int capacity(node* head){
    if(head != NULL)
        return head->capacity;
}

void destroy(node** head){
    node *tmp = NULL;

    while(*head != NULL){
        tmp = pop(head);
        free(tmp);
        tmp = NULL;
    }

}
int main() {
int boy = 0;
int girl = 0;
int a;
printf("df\n");
while (a!=9){
	scanf(" %d",&a);
	if(a== 1){
		boy++;
	}
	if (a== 5){
		girl++;
	}
	
}
printf("boys are %d: \n girls are:%d",boy,girl);


}
