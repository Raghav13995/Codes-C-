#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is freed for value "<<value<<endl;
    }
};
void insertathead(Node *&head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertattail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void printll(Node* head){
    if(head==NULL){
        cout<<"link list is empty\n";
        return;
    }
    Node *temp=head;
    int cnt=1;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        cnt++;
    }
    cout<<endl;
}
void insertatposition(Node*&head,Node* &tail,int data,int position){
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    Node *temp=new Node(data);
    if(position==1){
        temp->next=head;
        head->prev=temp;
        head=temp;
        return;
    }
    Node* pari=head;
    int cnt=1;
    while(cnt<position-1){
        pari=pari->next;
        cnt++;
    }
    
    if(pari->next=NULL){
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        return;
    }
    temp->next=pari->next;
    pari->next->prev=temp;
    pari->next=temp;
    temp->prev=pari;
}


int main()
{
    Node* node1=NULL;
    Node* head=node1;
    Node* tail=node1;

    // // To insert at Head:--
    // cout<<"Number of elements to insert at head ";
    // int number;
    // cin>>number;
    // cout<<"enter the values\n";
    // for(int i=0;i<number;i++){
    //     int data;
    //     cin>>data;
    //     insertathead(head,tail,data);
    // }
    // printll(head);

    // // To insert at Tail:--
    // cout<<"Number of elements to insert at tail ";
    // int number2;
    // cin>>number2;
    // cout<<"enter the value\n";
    // for(int i=0;i<number2;i++){
    //     int data;
    //     cin>>data;
    //     insertattail(head,tail,data);
    // }
    // printll(head);

    cout<<"enter the elements in link list\n";
    cout<<"enter the number of elements\n";
    int number3;
    cin>>number3;
    for(int i=0;i<number3;i++){
        int position;
        cout<<"enter position ";
        cin>>position;
        cout<<"enter data ";
        int data;
        cin>>data;
        insertatposition(head,tail,data,position);
        printll(head);
    }

}