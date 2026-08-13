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
struct node* inbetween(int data,int index,struct node* head){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
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

    // traversal(head);
    head=inbetween(5678,1,head);
    traversal(head);


    
}