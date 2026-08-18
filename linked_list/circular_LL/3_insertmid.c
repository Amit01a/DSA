#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void traversal(struct node *head){
    struct node *ptr=head;
    do{
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr->next!=head);
    
        printf("element:%d",ptr->data);
}

struct node * insertatindex(struct node *head,int data,int index )
{
struct node* ptr=(struct node *)malloc(sizeof(struct node));
struct node *p=head;

ptr->data=data;
 int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;


}
int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));

    head->data=11;
    head->next=second;

    second->data=12;
    second->next=third;

    third->data=13;
    third->next=fourth;

    fourth->data=14;
    fourth->next=head;
printf("before\n");
    traversal(head);
    printf("after\n");
    head=insertatindex(head,333,2);
    traversal(head);
    
}