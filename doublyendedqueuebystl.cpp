#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(12);
    d.push_front(11);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();

    if(d.empty()){
        cout<<"Empty\n";
    }
    else{
        cout<<"Not Empty\n";
    }
    cout<<"*********"<<endl;
    d.push_back(14);
    d.push_back(15);
    d.push_back(16);
    d.clear();
    if(d.empty()){
        cout<<"Empty\n";
    }
    else{
        cout<<"Not Empty\n";
    }
    cout<<"*********"<<endl;
    d.push_back(14);
    d.push_back(15);
    d.push_back(16);
    
    
}