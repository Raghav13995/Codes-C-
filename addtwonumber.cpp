#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

class Solution {
public:
void print (ListNode* &head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout<< temp -> val <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
    ListNode* create(int num,ListNode* &head,ListNode* &tail){
    ListNode *newnode;
    newnode=new ListNode;
    newnode->next=NULL;
    if(num==0){
        newnode->val=0;
        return newnode;
    }
    if(head==NULL){
        head=newnode;
        tail=newnode;
        newnode->val=num%10;
        tail=newnode;
        tail->next=NULL;
        return head;


    }
    newnode->val=num%10;
    tail->next=newnode;

    tail=newnode;
 //   cout<<"ttt-"<<tail->val<<endl;
    return head;
}


    int sizell(ListNode* l){
        int cnt =0;
        while(l!=NULL){
            cnt++;
            l=l->next;
        }
        return cnt;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int size1=sizell(l1);
        int size2=sizell(l2);
        int num1=0;
        int num2=0;
        for(int i=0;i<size1;i++){
            num1=num1 + l1->val*pow(10,i);
            l1=l1->next;
        }
        for(int i=0;i<size2;i++){
            num2=num2 + l2->val*pow(10,i);
            l2=l2->next;
        }
       // int num3=num1+num2;
        cout<<"NUM3="<<num3<<endl;
        ListNode *head=NULL;
        ListNode *tail=NULL;
        if(num3==0){
            return create(num3,head,tail);
        }
        
        while(num3>0){
            create(num3,head,tail);
            num3=num3/10;
           // cout<<"tail="<<tail->val<<endl;
            // if(tail->next==NULL){
            //     //cout<<"ji\n";
            // }
                        


            
        }
        //print(head);
        return head;
                
    }
};
int main()
{
    ListNode *l1=new ListNode;
    l1->next=NULL;
    l1->val=0;
    ListNode *l2=new ListNode;
    l2->next=NULL;
    l1->val=1;
    Solution s;
    s.addTwoNumbers(l1,l2);

}