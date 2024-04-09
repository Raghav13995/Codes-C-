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
void insertattail(Node* &head,
             Node* &tail,int data){
    Node *newnode=new Node(data);
    if(head==NULL){
        cout<<"Empty LL\n";
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print(Node *head){
    if(head==NULL){
        return;
    }
    cout<<"LL -> ";
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void sortapproach1(Node*&head){
    if(head==NULL)
    return;
    int zerocount=0;
    int onecount=0;
    int twocount=0;
    Node* temp=head;
    while(temp!=NULL){
        int value=temp->data;
        if(value==0)
        zerocount++;
        else if(value==1)
        onecount++;
        else if(value==2)
        twocount++;
        
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(zerocount>0){
            temp->data=0;
            zerocount--;
        }
        else if(onecount>0){
            temp->data=1;
            onecount--;
        }
        else if(twocount>0){
            temp->data=2;
        }
        temp=temp->next;
    }
// Time complexity O(n).
// Space complexity O(1). 
    
}
void InsertAtTail(Node *tail,Node* temp){
    tail->next=temp;
    tail=temp;

}
void sortApproach2(Node *&head){
    Node* zerohead=new Node(-1);
    Node* zerotail=zerohead;

    Node* onehead=new Node(-1);
    Node* onetail=onehead;

    Node* twohead=new Node(-1);
    Node* twotail=twohead;
    Node* temp=head;

    // Create Seperate list for 0s,1s,2s.
    while(temp!=NULL){
        if(temp->data==0){
            InsertAtTail(zerotail,temp);
        }
        else if(temp->data==1){
            InsertAtTail(onetail,temp);
        }
        else if(temp->data==2){
            InsertAtTail(twotail,temp);
        }
        temp=temp->next;
    }

    // Merging this 3 linklist:--

    if(onehead->next!=NULL){
        zerotail->next=onehead->next;
    }
    else {
        zerotail->next=twohead->next;
    }

    onetail->next=twohead->next;
    twotail->next=NULL;

    // Setup Head:-
    head=zerohead->next;

    // delete dummy Node:-
    delete(zerohead);
    delete(onehead);
    delete(twohead);
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    cout<<"Enter size of LL\n";
    int size;
    cin>>size;
    cout<<"Enter Elements\n";
    int element;
    while(size--){
        cin>>element;
        insertattail(head,tail,element);
    }
    print(head);

    sortapproach1(head);
    print(head);
}