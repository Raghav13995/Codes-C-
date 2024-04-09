#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this-> data=d;
        this-> next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data "<< value<<endl; 
    }

};
void insertNode(Node* &tail,int element,int d){
    // empty list:--
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    // non-empty list:--
    // assuming that the element is pesent in the list.

    else{
        Node *curr=tail;
        while(curr->data!=element){
            curr=curr->next;
            if(curr==tail){
                return;
            }
        }
        // element found ->curr is representing the element wala node.
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}
void print(Node *&tail){
    Node *temp=tail;
    /*
    while(temp->next!=temp)// but due to this condition when there is only 
    // one element in the link list then it will not print it.
    // so to avoid this we will use do while loop . 
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }*/

    // empty link list:--
    if(tail==NULL){
        cout<<"link list is empty\n";
        return;
    }
    

    do {
        cout<<tail -> data<< " ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

void deleteNode(Node *& tail,int value){
    // empty link list
    if(tail==NULL){
        cout<<"list is empty, plse try it again"<<endl;
        return;
    }
    else{
    // non - empty link list.
    // assuming that the value is present in the link list.
    Node *prev=tail;
    Node *curr=prev->next;
    while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    // 1 Node link list:--
    if(curr==prev){
        tail=NULL;
    }

    // >=2 Node link
    else if(tail==curr){
        tail=prev;
    }
    curr->next=NULL;
    delete curr;
}
}
int main()
{
    // in circular link list we will not use head pointer, we 
    // will only use tail pointer.
    // we can access last node by using tail and we can also 
    // access 1st node by using tail when we do tail=tail->next.

    Node *tail=NULL;
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    insertNode(tail,9,10);
    print(tail);

    insertNode(tail,3,4);
    print(tail);

    deleteNode(tail,3);
    print(tail);

    deleteNode(tail,10);
    print(tail);

    insertNode(tail,123,89);
    print(tail);

    cout<<"----------\n----------\n";
    Node* tail2=NULL;
    print(tail2);
    

    insertNode(tail2,6,5);
    print(tail2);

    deleteNode(tail2,5);
    print(tail2);

    cout<<"circular linked list completed\n";
}