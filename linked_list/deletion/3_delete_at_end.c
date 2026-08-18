#include<stdio.h>
#include<stdlib.h>


typedef struct node{
int data;
struct node *next;
};

void display(struct node *ptr){
    while (ptr!=NULL)
    {
        printf("element=%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

struct node *dellastnode(struct node *head){
    struct node *q=head;
    struct node *p=head->next;
    while(p->next!=NULL){
        q=q->next;
        p=p->next;

    }
    q->next=NULL;
    free(p);
    return head;


}
int main()
{
 struct node *head;
 struct node *second;
 struct node *third;
 struct node *fourth;

 head=(struct node*)malloc(sizeof(struct node));
 second=(struct node*)malloc(sizeof(struct node));
 third=(struct node*)malloc(sizeof(struct node));
 fourth=(struct node*)malloc(sizeof(struct node));

 head->data=11;
 head->next=second;

 second->data=12;
 second->next=third;

 third->data=13;
 third->next=fourth;

 fourth->data=14;
 fourth->next=NULL;
printf("before\n");
display(head);
printf("after\n");
head=dellastnode(head);
display(head);


}
