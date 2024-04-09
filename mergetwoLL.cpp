
#include<bits/stdc++.h>
using namespace std;
struct Node {
      int val;
      struct Node *next;
      
  };
class Solution {
public:
    Node* mergeTwoLists(Node* list1,Node* list2) {
        struct Node* head=NULL;
        struct Node* tail=NULL;
        if(list1->val >= list2->val){
            head=list2;
            tail=list2;
            list2=list2->next;

        }
        else {
            head=list1;
            tail=list1;
            list1=list1->next;
        }
        while(list2!=NULL && list1!=NULL){
            if(list1->val >= list2->val){
            tail->next=list2;
            tail=list2;
            list2=list2->next;

            }
            else {
                tail->next=list1;
                tail=list1;
                list1=list1->next;
            }
        }
        return head;
    }
};