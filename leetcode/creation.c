#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}n;
int main()
{
    int  num;
    n *head=NULL;
    n *ptr;
printf("enter number of nodes:");
scanf("%d",&num);
for(int i=0;i<num;i++){
    n *newnode=(n*)malloc(sizeof(n));
    printf("enter data in node:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
}

printf("linked list:\n");
ptr=head;

while(ptr!=NULL){

    printf("%d ->",ptr->data);

    ptr=ptr->next;

}


printf("NULL\n");
}