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
void insertattail(Node* &head,Node* &tail,
                                 int data){
    if(tail==NULL){
        Node *newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    Node *temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool checkLoop(Node* &head){
    if(head==NULL){
        return false;
    }
    map<Node*,bool>visited;
    Node* temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"Loop present on element "
                        <<temp->data<<endl;
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

bool floyddetectloop(Node* head){
    if(head==NULL){
        return false;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
             if(fast!=NULL)
             fast=fast->next;
              if(fast==slow)
              return true;
              else 
              if(fast==NULL){
              return false;
              }            
 }
}

Node* floyddetectloop2(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
             if(fast!=NULL)
             fast=fast->next;
              if(fast==slow){
              return slow; 
              }   
            }
            return NULL;
 }
 Node* getStartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection = floyddetectloop2(head);
    Node* slow=head;
    if(intersection==NULL){
        cout<<"No loop available\n";
        return NULL;
    }

    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
 }
 void removeloop(Node* head){
    if(head==NULL){
        return;
    }
    Node* startofLoop = getStartingNode(head);
    Node* temp=startofLoop;
    if(startofLoop==NULL){
        return;
    } 
    while(temp->next!=startofLoop){
        temp=temp->next;
    }
    temp->next=NULL;
 }

int main()
{   
    Node* tail=NULL;
    Node* head=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    int n;
    cout<<"enter the number of element in"<<
                          " the link list\n";
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        insertattail(head,tail,data); 
    }
    printLL(head);

    // now doing looping for checking:-
    
    tail->next=head->next;
    if(checkLoop(head)){
        cout<<"Loop is present\n";
    }
    else
    {
        cout<<"No Loop\n";
    }
    tail->next=head->next->next;
     if(checkLoop(head)){
        cout<<"Loop is present\n";
    }
    else
    {
        cout<<"No Loop\n";
    }

    cout<<"For 2nd LL\n";
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        insertattail(head2,tail2,data);
    }
    printLL(head2);
     if(checkLoop(head2)){
        cout<<"Loop is present\n";
    }
    else
    {
        cout<<"No Loop\n";
    }
    cout<<"checking by floyd alogorithm\n";
    cout<<"For 1st:--\n";
     if(floyddetectloop(head)){
        cout<<"Loop is present\n";
    }
    else
    {
        cout<<"No Loop\n";
    }

    cout<<"For 2nd:--\n";
    if(floyddetectloop(head2)){
        cout<<"Loop is present\n";
    }
    else
    {
        cout<<"No Loop\n";
    }

    cout<<"Now creating the solution to find"<<
      " the value at \nindex of the starting of"
      <<" the loop\n"<<"By floyd algorithm"<<endl;

    cout<<"For 1st \n";
    Node* loop = getStartingNode(head);
    if(loop!=NULL){
        cout<<"loops start at "<<loop->data<<endl;
    }

    cout<<"For 2nd \n";
    loop = getStartingNode(head2);
    if(loop!=NULL){
        cout<<"loops start at "<<loop->data<<endl;
    }

    cout<<"Now to delete the loop\n";
    removeloop(head);
    printLL(head);

    // To check whelther the loop is
    // deleted really or not:--
    cout<<"checking by floyd alogorithm\n";
    cout<<"For 1st:--\n";
     if(floyddetectloop(head)){
        cout<<"Loop is present\n";
    }
    else
    {
        cout<<"No Loop\n";
    }
    cout<<"For 2nd\n";
    removeloop(head2);
}