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
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        else{
            cout<<"Deleting - "<<
            value<<endl;
        }
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
        cout<<"LL is empty\n";
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
void deleteNode(Node *&head,
         Node *&tail,int position){
    if(head==NULL){
        cout<<"Already Empty#\n";
        return;
    }
    // For only 1 Element:-
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete(temp);
        return;
    }
    Node *prev=NULL;
    Node *curr=head;
    int t=1;
    while(t<position){
        prev=curr;
        curr=curr->next;
        t++;
    }
    prev->next=curr->next;

    // For last Node:-
    if(curr->next==NULL){
        tail=prev;
        delete(curr);
        return;
    }
    
    curr->next=NULL;
    delete(curr);
}
void reverse(Node *&head,Node* curr,
                         Node* prev){
        if(curr==NULL){
            head=prev;
            return;
        }
        Node* forward2=curr->next;
        reverse(head,forward2,curr);
        curr->next=prev;
    }
    void reverselinklist(Node* &head,
                         Node* &tail){
        tail=head;
        Node* curr=head;
        Node* prev=NULL;
        reverse(head,curr,prev);
        return;
    }

    void deleteDuplicatesFromSorted
             (Node*&head,Node*&tail){
        // Empty LL:_
        if(head==NULL){
            cout<<":: Empty ::\n";
            return;
        }

        // Non empty LL:-
        Node *curr=head;
        Node *temp=head->next;
        while(temp!=NULL){
            if(temp->data==curr->data){
                Node*Todelete=temp;
                curr->next=temp->next;
                temp=temp->next;

        // This is b/c, when the last 
        // element is duplicate of previous
        // then we have to delete last element
        // so For tail to not to loss its track
        // we are doing this. 
                if(Todelete->next==NULL){
                    tail=curr;
                }
                Todelete->next=NULL;
                delete(Todelete);
            }
            // Not Equal  
            else{
                curr=curr->next;
                temp=temp->next;
            }
            
        }
    }
    Node* reversekgroup(Node* &head,
                           int kgroup){
    // base case:--
    if(head==NULL)
    return NULL;

    Node *prev=NULL;
    Node *curr=head;
    Node *next=NULL;
    int cnt=0;
    while(curr!=NULL && cnt<kgroup){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;
    }
    head->next=reversekgroup(next,kgroup);
    head=prev;
    return prev;
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    insertattail(head,tail,25);
    print(head);

    insertattail(head,tail,17);
    print(head);

    insertattail(head,tail,17);
    print(head);

    insertattail(head,tail,15);
    print(head);

    insertattail(head,tail,96);
    print(head);

    deleteNode(head,tail,5);
    print(head);
    cout<<"tail- "<<tail->data<<endl;
    
    cout<<"Reversing:- ";
    reverselinklist(head,tail);
    print(head);
    cout<<"tail-> "<<tail->data<<endl;

    insertattail(head,tail,96);
    print(head);
    insertattail(head,tail,96);
    print(head);
    insertattail(head,tail,96);
    print(head);

       

    deleteDuplicatesFromSorted(head,tail);
    print(head);

    cout<<"tail-> "<<tail->data<<endl;

    insertattail(head,tail,106);
    print(head);

    insertattail(head,tail,106);
    print(head);

    insertattail(head,tail,185);
    print(head);

    deleteDuplicatesFromSorted(head,tail);
    print(head);

    cout<<"::Reversing K group::\n";
    reversekgroup(head,2);
    print(head);
}