#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};
void linkedListTraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;
    }


}
struct node * insertatfirst(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
int main(){
struct node *head;
struct node *second;
struct node *third;

head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));

head->data=8;
head->next=second;

second->data=44;
second->next=third;

third->data=99;
third->next=NULL;
linkedListTraversal(head);
head=insertatfirst(head,339);
linkedListTraversal(head);

}