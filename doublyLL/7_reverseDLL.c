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

traversal(head);


}