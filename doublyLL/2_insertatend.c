#include<stdio.h>
#include<stdlib.h>


#include<stdio.h>
#include<stdlib.h>

struct  node {
    int data;
    struct node *prev;
    struct node *next;

};


void traversal(struct node *head){
    struct node *p=head;
    while(p!=NULL)
    {
        printf("element:%d\n",p->data);
        p=p->next;
    }
}

struct node *insertatend(struct node* head,int data){

    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;

    if (head==NULL){
        ptr->prev=NULL;
        return ptr;
    }
    while(p->next!=NULL)
    {
        p=p->next;
    }
    ptr->next=NULL;
    ptr->data=data;
    ptr->prev=p;
    p->next=ptr;
    return head;

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
head=insertatend(head,222);
traversal(head);


}