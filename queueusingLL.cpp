#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Queue{
    public:
    Node *front,*rear;
    Queue(){
        this->front=NULL;
        this->rear=NULL;
    }
    void enQueue(int data){
        // Create a new LL node
        Node *newnode=new Node(data);

        // If queue is empty, then new
        // node is front and rear both
        if(rear==NULL){
            front=newnode;
            rear=newnode;
            return;
        }
        rear->next=newnode;
        rear=newnode;
    }

    void deQueue(){
        if(front==NULL){
            cout<<"Queue is Empty\n";
            return;
        }
        Node *temp=front;
        front=front->next;

        // If front becomes NULL,
        // then change rear also as NULL
        if (front == NULL)
            rear = NULL;

            delete(temp);
    }
    void Frontrear(){
        if(front==NULL){
            cout<<"Empty\n";
            return;
        }
        cout<<"Front:- "<<front->data<<endl;
        cout<<"Rear:- "<<rear->data<<endl;
    
    }
    void Display(){
        Node *temp=front;
        cout<<"queue - ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    
 
    Queue q;
    int a;
 
   while(1){
    cout<<"Enter choice\n";
    cin>>a;
    switch(a){
        case 1:
        int element;
        cout<<"Enter data\n";
        cin>>element;
        q.enQueue(element);
        break;
        case 2:
        q.deQueue();
        break;
        case 3:
        q.Display();
        break;

        
    }
   }


}
