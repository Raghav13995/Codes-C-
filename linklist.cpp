#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    // constructor-
    Node(int data){
        this->data=data;
        this->next=NULL;   
        // When this null does not define then the pointer will
        // have some garbage value.
    }

    // destructor:-
    ~Node(){
        int value =this->data;
        // MEMORY FREE:--
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        else{
        cout<<"memory is free for node with data "<<value<<endl;
        }
    }
};
void insertAtHead(Node *&head,int d){
    // new node create
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int data){
    // new node create.
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    // inserting at first position.
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    
    Node* temp=head;
    int l=1;
    while(l<position-1){
    // position-1 isliye kiya kyuki 
    // jese 3rd postion pr koi element dalna hai toh, apn pehle
    // bethe hai position 1 pr 3 position pr add krne k liye apne
    // ko 2 node pr jana hoga mtlb ek bar loop chalana hoga ,mtb
    // position -1 .
    temp=temp->next;
    l++;
    }
    // inserting at last position.
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
void print (Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void deleteNode(int position,Node*&head,Node *&tail){
    // deleting first node or start node
    if(position == 1){
        Node* temp =head;
        head=head->next;
        temp->next=NULL;
        // jo bhi node hum delete krna chahte hai pehle uske next
        // pointer ko NULL krna
        delete temp;
    }
    else{
        // deleting any middle node or last node.
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev = curr;
            curr=curr->next;
            cnt++;
        }
        if(curr->next==NULL){
            tail=prev;
        }
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
        // but by doing this our tail is not getting positioned.
        // mtlb jab hum last node delete krne hai toh vo delete toh ho
        // jayega lekin uske bad tail->data jo hai woh garbage value le
        // lega.
        // toh uske liye ky kare HW diya m babbar ji ne.
    }
}

int main()
{
   

    // SINGLE LL:--
       // created a new node.
       Node* node1 = new Node(10);
       // cout<< node1-> data <<endl;
       // cout<< node1-> next <<endl;

       // head pointed to node1.
       Node *head = node1;
       Node *tail2=node1;
       print(head);
       // here there is only 1 linked list

       insertAtHead(head,12);
       print (head);
       // here there is 2 element in linked list

       insertAtHead(head,15);
       print(head);
       // here there is 3 element in the linked list. 

       // BUT THE PROBLEM IS THAT THE LAST ELEMENT IS STORED AT FIRST
       // PLACE IN THIS LINKED LIST, WHICH IS NOT GOOD LOOKING TO EYES.

       // SO AS TO CREATE THIS LINKED LIST WE CREATE A HEAD POINTER, SO
       // FOR THAT LINKED LIST WE HAVE TO CREATE TAIL POINTER.


       cout<<endl<<"created the insert at tail linked list\n"<<endl;

       Node* node2=new Node(10);
       Node *tail=node2;
       Node *head2=node2;
       print(head2);

       insertAtTail(tail,12);
       print(head2);

       insertAtTail(tail,15);
       print (head2);

       insertAtPosition(tail,head2,4,90);
       print(head2);

       insertAtPosition(tail,head2,3,89);
       print(head2);

       insertAtPosition(tail,head2,1,00);
       print(head2);
       
       insertAtHead(head2,67);
       print(head2);
       cout<<"1). "<<tail->data<<endl;

       deleteNode(2,head2,tail);
       print(head2);
       cout<<"2). "<<tail->data<<endl;

       deleteNode(6,head2,tail);
       print(head2);
       cout<<"3). "<<tail->data<<endl;

       deleteNode(1,head2,tail);
       print(head2);    
       cout<<"4). "<<tail->data<<endl;


       cout<<"------------\n------------\n";

       insertAtTail(tail2,578);
       print(head);

       cout<<"head->data "<<head->data<<endl
           <<"tail2->data "<<tail2->data<<endl;
        cout<<"head2->data "<<head2->data<<endl
           <<"tail->data "<<tail->data<<endl;

}