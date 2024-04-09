#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor:--
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(next !=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<< value<<endl; 
    }
    
};

void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
// gives the length of link list:--
int getLength(Node*& head){
    Node *temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node*&head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp; 
    head=temp;
}

void insertAtTail(Node*& tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node *&tail,Node* &head,int position,int d){
    // insert at start:--
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    // inserting at last position:--
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    // inserting in middle:--
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
  
}

void deleteNode(int position,Node*& head,Node *&tail){
    // deleting the 1st Node:--
    if(position==1){
        Node* temp=head;
        temp->next->prev = NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else {
        // deleting any middle node or last node:--
        Node* curr = head;
        Node* previous = NULL;
        int cnt=1;
        while(cnt<position){
            previous = curr;
            curr=curr->next;
            cnt++;
        }
         if(curr->next==NULL){
            tail=previous;
        }
        curr-> prev = NULL;
        previous->next=curr->next;
        
        if(curr->next!=NULL)
        previous->next->prev=previous;
        curr->next =NULL;

        delete curr;
        
    }
}

int main()
{
    Node* node1=new Node(10);
    Node *head=node1;
    Node *tail=node1;
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(head,11);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(head,15);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    cout<<"465 is added at back\n";
    insertAtTail(tail,465);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    cout<<"using insertatposition function\n";
    insertAtPosition(tail,head,5,90);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail,head,1,789);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail,head,3,67);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deleteNode(7,head,tail);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    cout<<"---------\n";
    cout<<tail->prev->data<<endl;
    cout<<"---------\n";

    deleteNode(1,head,tail);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deleteNode(3,head,tail);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    cout<<"THE END OF DOUBLY LINK LIST"<<endl;




}