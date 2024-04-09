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
        printf("enter data\n");
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
void traverse(struct Node* start){
struct Node* temp=start;
while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;
}
}
int main(){
   int n;
    create();
    return 0;
}