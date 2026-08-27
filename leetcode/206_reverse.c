#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} n;

n *reverse(n *head)
{
    n *prev = NULL;
    n *curnode = head;

    while(curnode != NULL) {

        n *nextnode = curnode->next;

        curnode->next = prev;

        prev = curnode;
        curnode = nextnode;
    }

    return prev;
}

void display(n *head)
{
    printf("Linked list:\n");

    n *ptr = head;

    while(ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }

    printf("NULL\n");
}

int main()
{
    n *head = NULL;
    n *ptr;

    int num;

    printf("Enter number of nodes: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++) {

        n *newnode = (n*)malloc(sizeof(n));

        printf("Enter data of node %d: ", i + 1);
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
        }
        else {

            ptr = head;

            while(ptr->next != NULL) {
                ptr = ptr->next;
            }

            ptr->next = newnode;
        }
    }

    printf("\nOriginal ");
    display(head);

    head = reverse(head);

    printf("\nReversed ");
    display(head);

    return 0;
}