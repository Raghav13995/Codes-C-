#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*start=NULL;
void create(){
    while(1){
        int n;
        struct Node*newnode,*currnode;
        newnode=(struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(start==NULL){
            start=newnode;
            currnode=newnode;
        }
        else
        {
            currnode->next=newnode;
            currnode=newnode;
        }
        printf("to create one more node enter 1 and to end print 0\n");
        scanf("%d",&n);
        if(n==1){
            create();
        }
        else break;
    }
}
int main(){
    int n;
    scanf("%d",n);
    create();
    return 0;
}