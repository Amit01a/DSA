#include<stdio.h>
#include<stdlib.h>

typedef struct  node {
    int data;
    struct node *prev;
    struct node *next;

}n;

void traversal(n *head){
    n *ptr=head;
    while(ptr!=NULL)
    {       
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;

    }
}

n *atpos(n *head,int data,int pos){

    n *ptr=(n*)malloc(sizeof(n));
    n *p=head;
    n *q=p->next;
    ptr->data=data;

    if(head==NULL){
        ptr->next=NULL;
        ptr->prev=NULL;
        return ptr;
    }
    int count=1;

    while(count!=pos-1){
        p=p->next;
        q=q->next;
        count++;

    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->prev=p;
    q->prev=ptr;
    return head;



}



int main()
{
n* head=(n*)malloc(sizeof(n));
n* second=(n*)malloc(sizeof(n));
n* third=(n*)malloc(sizeof(n));
n* fourth=(n*)malloc(sizeof(n));

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
int num;
int pos;
printf("enter number:");
scanf("%d",&num);
printf("enter posiiton:");
scanf("%d",&pos);
head=atpos(head,num,pos);
traversal(head);


}