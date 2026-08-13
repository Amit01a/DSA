#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

//traversal
void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("DATA =%d\n",ptr->data);
        ptr=ptr->next;

    }
}

//inbetween 
// struct node* inbetween(int data,int index,struct node* head){
//     struct node *ptr=(struct node*)malloc(sizeof(struct node));
//     struct node *p=head;
//     int i=0;
//     while(i!=index-1){
//         p=p->next;
//         i++;
//     }
//     ptr->data=data;
//     ptr->next=p->next;
//     p->next=ptr;
//     return head;

// }

// struct node* atend(int data,struct node *head){
//     struct node *ptr=(struct node*)malloc(sizeof(struct node));
//     ptr->data=data;
//     struct node *p=head;
//     while(p->next!=NULL){
//         p=p->next;

//     }
//     p->next=ptr;
//     ptr->next=NULL;
//     return head;
// }

struct node* nodeinsert(struct node *head, struct node *prev,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prev->next;
    prev->next=ptr;
    return head;
}

int main(){
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
    fourth->next=NULL;
printf("linked list before insertion\n");
    traversal(head);
    // head=inbetween(5678,1,head);
    // traversal(head);
// printf("linked list after insertion\n");
//     head=atend(444,head);
//     traversal(head);

printf("after:\n");
head=nodeinsert(head,second,777);
traversal(head);


    
}