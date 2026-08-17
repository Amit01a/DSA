//three pointer method

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;

}n;
void linkedListTraversal(n *ptr){
    while(ptr!=NULL){
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}


n *reverse(n *head){
    //three pointer method
    n *curr=head;
    n *next=NULL;
    n *prev=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;

}
int main(){
n*head;
n*second;
n*third;

head=(n*)malloc(sizeof(n));
second=(n*)malloc(sizeof(n));
third=(n*)malloc(sizeof(n));

head->data=8;
head->next=second;

second->data=44;
second->next=third;

third->data=99;
third->next=NULL;
linkedListTraversal(head);
printf("after\n");
head=reverse(head);
linkedListTraversal(head);
}