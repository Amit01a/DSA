#include<stdio.h>
#define sz 5

typedef struct stack{
    int top;
    int arr[sz];
}s;

void initialize(s *a){
    a->top=-1;
}

void display(s *a){
    if(a->top==-1){
        printf("stack is empty\n");
    }
    else{
        printf("the elements are :\n");
        for(int i=a->top;i>=0;i--){
            printf("element:%d\n",a->arr[i]);
        }
        printf("\n");
    }

}

void push(s *a,int value){
    if(a->top==(sz-1)){
        printf("stack overflow\n");
    }
    else{
        a->top++;
        a->arr[a->top]=value;
    }
}
void pop(s *a){
    if(a->top==-1){
        printf("empty stack\n");

    }
    else{
        printf("popped element is %d\n",a->arr[a->top]);
        --a->top;
    }
}

int main()
{
int value,ch;
s a;
initialize(&a);


do{
    printf("1:push 2:pop 3:display \n");
    printf("enter choice:");
    scanf("%d",&ch);

    switch(ch){
        case 1:printf("enter element:");
                scanf("%d",&value);
                push(&a,value);
                break;
        case 2:pop(&a);
                break;
        case 3:display(&a);
                break;
    }

}while(ch<=5);
}