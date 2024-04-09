#include<bits/stdc++.h>
using namespace std;
class CircularQueue{
    public:
    int *arr;
    int size;
    int qfront;
    int rear;
    CircularQueue(int size){
        this->size=size;
        qfront=-1;
        rear=-1;
        arr=new int[size];
    }
    void enqueue(int data){
        if((qfront==0 && rear==size-1)  || qfront!=0 && rear==qfront-1){
            // to see whelther the queue is full:- 
            cout<<"Queue is Full\n";
            return;
        }
        else if(qfront==-1 && rear==-1){
            // to see whelther the queue is empty:-
            cout<<"hi\n";
            qfront++;
            rear++;
            arr[rear]=data;
            return;
        }
        else if(qfront!=0 && rear==size-1){
            // to bring circular nature:-
            rear=0;
            arr[rear]=data;
            return;
        }
        else{
            // normal flow:-
            rear++;
            arr[rear]=data;
        }

    }

    void dequeue(){
        if(qfront==-1){
            cout<<"Queue is Empty 1\n";
            return;
        }
        int ans=arr[qfront];
        arr[qfront]=-1;
        if(qfront==rear){
            // There is only 1 element which is going to be poped:-
            qfront=rear=-1;
            return;
        }
        else if(qfront==size-1){
            // To maintain the cycle:- 
            qfront=0;
        }
        else{
            qfront++;
        }
    }

    void frontValue(){
        if(qfront==-1){
            cout<<"Queue is Empty 2\n";
            cout<<"front index:- "<<qfront<<endl;
            cout<<"rear index:- "<<rear<<endl;
            return;
        }
        cout<<"front:- "<<arr[qfront]<<endl;
        cout<<"front index:- "<<qfront<<endl;
        cout<<"rear index:- "<<rear<<endl;
    }
    void empty(){
        if(qfront=rear=-1){
            cout<<"Queue is empty 3\n";
        }
    }

};
int main()
{
    cout<<"Enter the size of the Queue\n";
    int size;
    cin>>size;
    CircularQueue q(size);
    cout<<":::::: MENU ::::::\n";
    cout<<"1). Enqueue\n";
    cout<<"2). Dequeue\n";
    cout<<"3). Front Value\n";
    cout<<"4). Empty\n";
    cout<<"5). Exit\n";
    int a;
    while(1){
        cout<<"Enter Your Choice\n";
        cin>>a;
        switch(a){
            case 1:
            int element;
            cout<<"Enter data\n";
            cin>>element;
            q.enqueue(element);
            break;

            case 2:
            q.dequeue();
            break;

            case 3:
            q.frontValue();
            break;

            case 4:
            q.empty();
            break;

            case 5:
            exit(1);
            break;

        }
    }
}