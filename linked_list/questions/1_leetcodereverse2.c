//LEETCODE QUEST--
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}n;

void display(n *head){
    n *ptr=head;
    while(ptr!=NULL){
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

n *reverse(n *head,int left,int right){
    n *curr=head;
    n *prev=NULL;
    int i=1;
    while(curr!=NULL && i!=left){
        prev=curr;
        curr=curr->next;
        i++;
    }
    n *stpointer=prev;
    n *start=curr;
    prev=NULL;
    while(curr!=NULL && i!=right+1){
        n *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        i++;
    }
    start->next=curr;
    stpointer->next=prev;
    return head;





}

int main()
{
n *head=(n *)malloc(sizeof(n));
n *two=(n *)malloc(sizeof(n));
n *three=(n *)malloc(sizeof(n));
n *four=(n *)malloc(sizeof(n));
n *five=(n *)malloc(sizeof(n));

head->data=11;
head->next=two;
two->data=12;
two->next=three;
three->data=13;
three->next=four;
four->data=14;
four->next=five;
five->data=15;
five->next=NULL;

printf("before\n");
display(head);
printf("after\n");
head=reverse(head,2,4);
display(head);

}
