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
    }while(ptr!=head);
    
        // printf("element:%d",ptr->data);

}

struct node* insertAtBegining(struct node *head,int data)
{
struct node* ptr=(struct node *)malloc(sizeof(struct node));
ptr->data=data;
struct node *p=head->next;

while(p->next!=head){
    p=p->next;
}
p->next=ptr;
ptr->next=head;
head=ptr;
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
    head=insertAtBegining(head,555);
    traversal(head);

}