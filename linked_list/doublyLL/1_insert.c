#include<stdio.h>
#include<stdlib.h>

struct  node {
    int data;
    struct node *prev;
    struct node *next;

};
void traversal(struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL)
    {       
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;

    }
}

struct node * insertatbegin(struct node *head,int data)
{
struct node *ptr=(struct node*)malloc(sizeof(struct node));

ptr->data = data;
    ptr->prev = NULL;
    ptr->next = head;

    return ptr; 
}



int main()
{
struct node* head=(struct node*)malloc(sizeof(struct node));
struct  node* second=(struct node*)malloc(sizeof(struct node));
struct node* third=(struct node*)malloc(sizeof(struct node));
struct  node* fourth=(struct node*)malloc(sizeof(struct node));

head->data=11;
head->prev=NULL;
head->next=second;

second->data=12;
second->prev=head;
second->next=third;

third->data=13;
third->prev=second;
third->next=fourth;

fourth->data=14;
fourth->prev=third;
fourth->next=NULL;

printf("before\n");
traversal(head);
printf("after\n");
head=insertatbegin(head,222);
traversal(head);


}