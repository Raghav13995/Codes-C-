#include<bits/stdc++.h>
using namespace std;
void SortedInsert(stack<int>&stack,int num){
    if((stack.empty()) || (stack.top()<num)){
        stack.push(num);
        return;
    }
    int n;
    n=stack.top();
    stack.pop();
    SortedInsert(stack,num);
    stack.push(n);
}
void sortStack(stack<int>&stack){
    // Base Case:-
    if(stack.empty()){
        return;
    }
    int num;
    num=stack.top();
    stack.pop();

    // Recursive Call:-
    sortStack(stack);
    SortedInsert(stack,num);
}
void printStack(stack<int>s){
    if(s.size()==0){
        return;
    }
    cout<<s.top()<<" ";
    s.pop();
    printStack(s);

}

int main(){
    stack<int>stack;
    int N;
    cout<<"enter the size of stack\n";
    cin>>N;
    cout<<"enter the elements\n";
    while(N--){
        int element;
        cin>>element;
        stack.push(element);
    }
    printStack(stack);
    cout<<endl;
    sortStack(stack);
    cout<<"**********\n";
    printStack(stack);
}