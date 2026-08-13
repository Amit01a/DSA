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

struct node* delatindex(struct node* head,int index){
    struct node *p=head;
    struct node *q=head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
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
head=delatindex(head,1);
printf("after\n");
linkedListTraversal(head);
}