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
    ListNode* sortList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode*chotahead=sortList(head->next);
        if((chotahead->val)>(head->val)){
            head->next=chotahead;
        }
        else{
            ListNode* pull=chotahead;
            while(pull->next==NULL){
                pull=pull->next;
            }
            pull->next=head;
            return chotahead;
        }
        return head;
    }
};
int main()
{
    Solution s;
    
}