#include<bits/stdc++.h>
using namespace std;
void reverse(stack<int>&s,int size,int cnt){
    // Base Case:--
    if(cnt==size/2){
        s.pop();
        return;
    }
    else{
        int num=s.top();
        s.pop();

        // recursive call:-
        reverse(s,size,cnt+1);
        s.push(num);
    }
}
int main()
{
    stack<int>s;
    cout<<"enter the size of stack\n";
    int N;
    cin>>N;
    cout<<"enter the elements\n";
    while(N--){
        int element;
        cin>>element;
        s.push(element);
    }
    cout<<":::.:::- "<<s.size()<<endl;
    int cnt=0;
    reverse(s,N,cnt);
    cout<<":::.:::- "<<s.size()<<endl;
    
}