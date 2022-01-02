#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;

void insertFront(node **head,int data)
{
    node *temp;                             //allocating  new memory to the temp variable
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    if(*head==NULL)                         // if there is no element in the linked list 
    *head=temp;
    else
    {
        temp->next=*head;
        *head=temp;
    }
    
   // printf("%d ",temp->data);
    
}

void insertLast(node **head,int data)
{
    node* temp=(node*)malloc(sizeof(node));
    node* last=*head;
    temp->data=data;
    temp->next=NULL;
    if(*head==NULL){
        *head=temp;
        return;
    }
                                            
    while(last->next!=NULL)                             // to iterate to the last of the linked list
    {
        last=last->next;
    } 
    last->next=temp;
    return;   

}
/*
void insertLast(node **head,int data)
{
    node* temp=(node*)malloc(sizeof(node));
    node* last=(node*)malloc(sizeof(node));         // this does not work
    last=*head;
    temp->data=data;
    temp->next=NULL;
    if(*head==NULL){
        *head=temp;
        return;
    }
    
    while(last!=NULL){
        last=last->next;
    } 
    last->next=temp;
    return;   

}
*/


void print_list(node * head) {
    node * current = head;

    while (current != NULL) 
    {
        printf("%d  ", current->data);
        current = current->next;
    }
}


int main()
{
    node *head=NULL;   

    insertFront(&head,10);    
    insertFront(&head,20);    
    insertFront(&head,30);

    print_list(head);
    printf("\n");

    insertLast(&head,5);
    insertLast(&head,4);
    insertLast(&head,3);

    print_list(head);
    
    
    return 0;
}
