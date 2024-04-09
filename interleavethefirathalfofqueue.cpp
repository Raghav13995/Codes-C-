#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int size;
    cout<<"enter the size of queue\n";
    cin>>size;
    while(size--){
        int element;
        cin>>element;
        q.push(element);
    }
    int half=q.size()/2;
    queue<int>q2;
    cout<<"hi1"<<endl;
    while(half-- ){
        q2.push(q.front());
        q.pop();
    }
    cout<<"hi2"<<endl;
    while(!q2.empty()){
        q.push(q2.front());
        q2.pop();
        q.push(q.front());
        q.pop();
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}