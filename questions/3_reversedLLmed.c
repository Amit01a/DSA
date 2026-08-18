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


n *reverse(n *head,int left,int right){
    n *cur=head;
    n *prev=NULL;
    int i=1;
    while(cur!=NULL && i!=left){
        prev=cur;
        cur=cur->next;
        i++;
    }
    n *pointertostart=prev;
    n *start=cur;
    prev=NULL;
    while(cur!=NULL && i!=right+1){
        n *next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
        i++;
    }
    start->next=cur;
    if(pointertostart!=NULL){
        pointertostart->next=prev;   
    }
    else{
        return prev;
    }
    return head;



}
int main(){
n*head;
n*second;
n*third;
n*four;
n*five;

head=(n*)malloc(sizeof(n));
second=(n*)malloc(sizeof(n));
third=(n*)malloc(sizeof(n));
four=(n*)malloc(sizeof(n));
five=(n*)malloc(sizeof(n));

head->data=1;
head->next=second;

second->data=2;
second->next=third;

third->data=3;
third->next=four;

four->data=4;
four->next=five;

five->data=5;
five->next=NULL;


linkedListTraversal(head);
printf("after\n");
head=reverse(head,2,4);
linkedListTraversal(head);

}