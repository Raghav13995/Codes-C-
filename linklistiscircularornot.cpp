#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    } 
};
void creatingcircularLL(Node* &tail,int data){
    // empty LL
    if(tail==NULL){
        Node* newnode=new Node(data);
        tail=newnode;
        tail->next=tail;
        return;
    }
    // Non empty LL :--
    Node *temp=new Node(data);
    temp->next=tail->next;
    tail->next=temp;
    tail=temp;
}
 void insertattail(Node* &head,Node* &tail,int d){
        if(head==NULL){
            Node* newnode=new Node(d);
            head=newnode;
            tail= newnode;
            return;
        }
        Node* temp= new Node(d);
        tail->next=temp;
        tail=temp;
    }
void printLL(Node* tail){
    if(tail==NULL){
        cout<<"LL is Empty\n";
        return;
    }
    Node *temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
bool checkLL(Node* tail){
    if(tail==NULL){
        return true;
        // it is true in case of empty LL.
    }
    Node* temp=tail->next;
    while(temp !=NULL && temp!=tail){
        temp=temp->next;
    }
    if(temp==NULL){
        return false;
    }
    if(temp==tail){
        return true;
    }
    // :::: TIME COMPLEXITY IS O(N)::::
    // :::: SPACE COMPLEXITY IS O(1)::::
}
int main()
{
    Node* tail=NULL;
    cout<<"Enter the number of elements"
    <<" to enter in the circular LL\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        creatingcircularLL(tail,data);
        // printLL(tail);
    }
    printLL(tail);
    cout<<"tail "<<tail->data<<endl;

    cout<<"checking whelther the LL is circular or not\n";
    bool check=checkLL(tail);
    if(check == true){
        cout<<"LL is circular\n";
    }
    else cout<<"LL is not circular\n";

    cout<<"Now checking for non circular LL\n";
    Node* tail2=NULL;
    Node* head2=NULL;
    cout<<"no. of elements in non circular LL\n";
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int data;
        cin>>data;
        insertattail(head2,tail2,data);
    }
    //printLL(head2);
    cout<<"Checking LL is circular or not\n";
     bool check2=checkLL(head2);
     if(check2 == true){
        cout<<"LL is circular\n";
    }
    else if(check2==false)
    cout<<"LL is not circular\n";

}