#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*top=NULL;
void push(){
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter data\n");
    scanf("%d",&newnode->data);
    if(top==NULL){
        top=newnode;
        newnode->next=NULL;
        return;
    }

    newnode->next=top;
    top=newnode;
}
void print(struct Node *top){
    while(top!=NULL){
    printf("%d",top->data);
    printf(" ");
    }
    printf("\n");
}
int main(){
    push();
    return 0;
}