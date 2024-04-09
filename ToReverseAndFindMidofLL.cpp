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
        // When this null does not
        // define then the pointer will
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
        cout<<"memory is free for node with data "<<
        value<<endl;
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

void insertAtPosition(Node* &tail,Node* &head,
                        int position,int d){
    // inserting at first position.
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    
    Node* temp=head;
    int l=1;
    while(l<position-1){
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
void print (Node*head){
    if(head==NULL){
        cout<<"the linklist is empty\n";
        return;
    }
    Node* temp=head;
    while(temp!=NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
// 1). iterative solution :--
void reverseLinkedList(Node* &head,Node *&tail){
    if(head == NULL || head->next==NULL){
        return;
    }
    Node* prev=NULL;
    Node* curr=head;
    tail=head;
    Node* forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;

    }
    head=prev;
    // Time Complexity - O(n).
    // where n is number of node in LL
    // Space Complexity - O(1).
}

// 2). Recursive Solution:- 
void solve(Node *&head,Node *curr,Node *prev){
    // Base Case:- 
    if(curr==NULL){
        head=prev;
        return;
    }
    Node *forward=curr->next;
    // Recursive Code:-
    solve(head,forward,curr);
    curr->next=prev;
}
void reverseusingrecursion(Node *&head,Node *&tail){
    if(head == NULL || head->next==NULL){
        return;
    }
    tail=head;
    Node *prev=NULL;
    Node *curr=head;
    solve(head,curr,prev);
}

// To Find the Length of LL:-
int getlength(Node* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}

// To Find Mid Element Of LL:- 
void findMiddle(Node*head){
    int len=getlength(head);
    int ans=(len/2);
    Node*temp=head;
    int cnt=0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    cout<<"middle - "<<temp->data<<endl;
}

// Optimised Method To Find Mid Element:-  
void getMiddle(Node * head){
    if(head==NULL){
        cout<<"list is empty\n"<<endl;
        return;
    }
    if(head->next==NULL){
        cout<<"there is only 1 element in the LL\n";
        return;
    }
    if(head->next->next==NULL){
        cout<<head->next->data<<endl;
        return;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    cout<<"middle - optimised -  "<<slow->data<<endl;
}


int main()
{
    Node* newNode=new Node(10);
    Node*head=newNode;
    Node*tail=newNode;
    print(head);

    insertAtTail(tail,3);
    print(head);

    insertAtTail(tail,9);
    print(head);

    insertAtTail(tail,8);
    print(head);

    reverseLinkedList(head,tail);
    print(head);
    cout<<"tail "<<tail->data<<endl;

    // Approach 2 or 3 samjh nhi aayi rexcursion pr based thi.

    // NOW TO FIND THE MIDDLE NUMBEER OF THE LINK LIST:--
    

    findMiddle(head);
    cout<<"tail "<<tail->data<<endl;
    cout<<"1)."<<head->data<<endl;
    cout<<"2)."<<head->next->data<<endl;
    cout<<"3)."<<head->next->next->data<<endl;

    insertAtTail(tail,13);
    insertAtTail(tail,109);
    print(head);

    // Time Complexity for measuring middle:--
    // = O(getlength)+O(findMiddle)
    // = O(n) + O(n/2)
    // = O(n).


    // NOW TO OPTIMISE THE TIME COMPLEXITY, TO FIND MID :--
    // WE ARE CREATING getMiddle. 

    getMiddle(head);

    // Time Complexity is O(n/2)=O(n).
    // Space Complexity is O(1).

    cout<<"Reverse  LL By Method 2:-"<<endl;
    reverseusingrecursion(head,tail);
    print(head);
}