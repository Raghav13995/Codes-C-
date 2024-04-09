//{ Driver Code Starts
// Program to check if linked list is empty or not
#include<iostream>
#include<math.h>
using namespace std;
const long long unsigned int MOD = 1000000007;

/* Link list Node */
struct Node
{
    bool data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
 
class Solution
{
    long long unsigned int solve(Node* head,int &count,long long unsigned int &ans){
        if(head==NULL){
            return ans;
        }
        int data=head->data;
        solve(head->next,count,ans);
        count++;
        ans+=data*pow(2,count);
        return ans;
        
    }
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
           int count=-1;
           long long unsigned int ans=0;
           return solve(head,count,ans)%MOD;
        }
};




//{ Driver Code Starts.

void append(struct Node** head_ref, struct Node **tail_ref, bool new_data)
{

    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}


bool isEmpty(struct Node *head);

/* Driver program to test above function*/
int main()
{
    bool l;
    int i, n, T;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
        Solution obj;
        cout << obj.decimalValue(head) << endl;
    }
    return 0;
}
// } Driver Code Ends