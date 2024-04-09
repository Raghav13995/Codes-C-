#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;

    q.push(11);
    q.push(12);
    q.push(13);
    cout<<"size:- "<<q.size()<<endl;
    q.pop();
    cout<<"size:- "<<q.size()<<endl;
    cout<<"Front:- "<<q.front()<<endl;
    cout<<"back:- "<<q.back()<<endl;
    
    if(q.empty()){
        cout<<"Queue is empty\n";
    }
    else{cout<<"Queue is not empty\n";}

    queue<int>q2;
    q2.push('A');
    q2.push('B');
    q2.push('C');
     
    // The value of the two stack got interchange:-
    q.swap(q2);
    cout<<"Front of q:- "<<q.front()<<endl;
    cout<<"back of q:- "<<q.back()<<endl;

    cout<<"Front of q2:- "<<q2.front()<<endl;
    cout<<"back of q2:- "<<q2.back()<<endl;

}