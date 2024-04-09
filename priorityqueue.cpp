#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Using priority queue\n";
    cout<<"Max Heap:-\n";

    priority_queue<int>max_heap;
    max_heap.push(4);
    max_heap.push(2);
    max_heap.push(5);
    max_heap.push(3);
    cout<<"Element Top:- "<<max_heap.top()<<endl;
    max_heap.pop();
    cout<<"Element Top:- "<<max_heap.top()<<endl;
    cout<<"Size :- "<<max_heap.size()<<endl;
    if(max_heap.empty()){
        cout<<"Max heap is empty\n";
    }
    else{
        cout<<"Max heap is not empty."<<endl;
    }
    cout<<"---------------------------------------------------\n";
    priority_queue<int,vector<int>,greater<int>>min_heap;
    min_heap.push(4);
    min_heap.push(2);
    min_heap.push(5);
    min_heap.push(3);
    cout<<"Element Top:- "<<min_heap.top()<<endl;
    min_heap.pop();
    cout<<"Element Top:- "<<min_heap.top()<<endl;
    cout<<"Size :- "<<min_heap.size()<<endl;
    if(min_heap.empty()){
        cout<<"Min heap is empty\n";
    }
    else{
        cout<<"Min heap is not empty."<<endl;
    }
}