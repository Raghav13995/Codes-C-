#include<bits/stdc++.h>
using namespace std;
class kqueue{
    public:
    int size;
    int k;
    int *arr;
    int *next;
    int freespot;
    int *front;
    int *rear;
    kqueue(int size,int k){
        this->size=size;
        this->k=k;        
        front=new int[k];
        rear=new int[k];
        for(int i=0;i<k;i++){
            front[i]=-1;
            rear[i]=-1;
        }        
        arr=new int[size];
        next=new int[size];
        for(int i=0;i<size-1;i++){
            next[i]=i+1;
        }
        next[size-1]=-1;
        freespot=0;
    }
    void enqueue(int data,int qe){
        
    // overflow
    if(freespot==-1){
        cout<<"OverFlow\n";
        return;
    }

    // find first  element
    int index=freespot;

    // update freespot
    freespot=next[index];

    // check whelther the 1st element
    if(front[qe-1]==-1){
        front[qe-1]=index;
    }
    // link new element to the pravious element
    else{
        next[rear[qe-1]]=index;
    }

    // update next:- kyuki ab vaha free space available nhi hai
    next[index]=-1;

    // update rear
    rear[qe-1]=index;

    // push element:-
    arr[index]=data;
    cout<<"*"<<freespot<<endl;
}

int  dequeue(int qe){
    if(front[qe-1]==-1){
        cout<<"UnderFlow\n";
        return -1;
    }
    
    // find index to pop();
    int index=front[qe-1];

    // front ko aage badhao:
    front[qe-1]=next[index];

     // freeslot ko manage karo:-
     next[index]=freespot;
     freespot=index;
     cout<<"**"<<freespot<<endl;
     return arr[index]; 
}
};

int main()
{
    kqueue q(4,3);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;

    cout<<q.dequeue(1)<<endl;

    q.enqueue(40,1);
    cout<<q.dequeue(1)<<endl;

    cout<<"jhuihui\n";
    q.enqueue(40,1);
    q.enqueue(52,1);
    q.enqueue(63,2);
    q.enqueue(96,1);

}