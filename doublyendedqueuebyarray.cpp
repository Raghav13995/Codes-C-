#include<bits/stdc++.h>
using namespace std;
class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Deque(int n){
        this->size=n;
        arr=new int[n];
        front=-1;
        rear=-1;
    }

    void pushFront(int data){
        // Check Empty Queue:-
        if(front==-1){
            front=0;
            cout<<"hi"<<endl;
            rear=0;
        }
        // Check Whlther the Queue is Full:--
        else if((front==0 && rear==size-1) || (rear==front-1 && front !=0)){
            cout<<"Queue is full\n";
            return;
        }
        else if(front==0){
            front=size-1;
        }
        else{
            front--;
        }
        arr[front]=data;
    }

    void pushRear(int data){
        // Check Empty Queue:-
        if(front==-1){
            front=0;
            rear=0;
        }
        // Check Whlther the Queue is Full:--
        else if((front==0 && rear==size-1) || (rear==front-1 && front !=0)){
            cout<<"Queue is full\n";
            return;
        }
        else if(rear==size-1){
            rear=0;
        }
        else{
            // Normal flow:-
            rear++;
        }
        arr[rear]=data;
    }
    void popFront(){
        if(front==-1){
            cout<<"Queue is Empty\n";
            return;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else if(front==size-1){
            // to maintain the cycle.
            front=0;
        }
        else {
            front++;
        }
    }
    void popRear(){
        if(front==-1){
            cout<<"Queue is Full\n";
            return;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear){
            // Single element present
            front=rear=-1;
        }
        else if(rear==0){
            // To maintain the Cyclic Nature:-
            rear=size-1; 
        }
        else{
            rear--;
        }
    }

    void GetFront(){
        if(isEmpty()){
            cout<<"Queue is Empty\n";
            cout<<"Front Index:- "<<front<<endl;
            cout<<"Rear Index:- "<<rear<<endl;
            return;
        }
        cout<<"Front:- "<<arr[front]<<endl;
        cout<<"Rear:- "<<arr[rear]<<endl;
        cout<<"Front Index:- "<<front<<endl;
        cout<<"Rear Index:- "<<rear<<endl;
    }

    void GetRear(){
        if(isEmpty()){
            cout<<"Queue is Empty\n";
            cout<<"Front Index:- "<<front<<endl;
            cout<<"Rear Index:- "<<rear<<endl;
            return;
        }
        cout<<"Front:- "<<arr[front]<<endl;
        cout<<"Rear:- "<<arr[rear]<<endl;
        cout<<"Front Index:- "<<front<<endl;
        cout<<"Rear Index:- "<<rear<<endl;
    }
    bool isEmpty(){
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }

};
int main()
{
    cout<<"Enter the Size of the queue\n";
    int size;
    cin>>size;
    Deque d(size);
    cout<<":::::: MENU ::::::\n";
    cout<<"1). PushFront\n";
    cout<<"2). PushRear\n";
    cout<<"3). PopFront\n";
    cout<<"4). PopRear\n";
    cout<<"5). GetFront\n";
    cout<<"6). GetRear\n";
    cout<<"7). Exit\n";
    int a;
    while(1){
        cout<<"Enter Your Choice\n";
        cin>>a;
        switch(a){
            case 1:
            int element;
            cout<<"Enter data\n";
            cin>>element;
            d.pushFront(element);
            break;

            case 2:
            cout<<"Enter data\n";
            cin>>element;
            d.pushRear(element);
            break;

            case 3:
            d.popFront();
            break;

            case 4:
            d.popRear();
            break;

            case 5:
            d.GetFront();
            break;

            case 6:
            d.GetRear();
            break;

            case 7:
            exit(1);
            break;
        }
    }
}