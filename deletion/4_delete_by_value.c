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

struct node* deletevalue(struct node* head,int value){
    struct node *p=head;
    struct node *q=head->next;
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    free(q);

    return head;

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
printf("before\n");
linkedListTraversal(head);

printf("after\n");
head=deletevalue(head,44);
linkedListTraversal(head);
}