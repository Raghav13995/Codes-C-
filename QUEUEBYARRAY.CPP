#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int *arr;
    int qfront;
    int rear;
    int size;
    Queue(int size){
        this->size=size;
        arr=new int[size];
        qfront=0;
        rear=0;
    }
    void enqueue(int data){
        if(rear==size){
            cout<<"Queue is Full\n";
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    void dqueue(){
        if(qfront==rear){
            cout<<"Queue is Empty\n";
        }
        else{
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
        }
    }
    void front(){
        if(qfront==rear){
            cout<<"Queue is Empty\n";
        }
        else{
            cout<<"Front:- "<<arr[qfront]<<endl;
        }
    }

    void empty(){
        if(rear==qfront){
            cout<<"Queue is Empty\n";
        }
    }

    void Size(){
        cout<<"size:- "<<rear-qfront<<endl;
    }
    void display(){
        cout<<"queue- ";
        int i=qfront;
        while(i<rear){
            cout<<arr[i]<<" ";
            i++;
        }
        cout<<endl;
    }
};
int main()
{   
    cout<<"Enter the Size of Queue\n";
    int size;
    cin>>size;
    Queue queue1(size);
    cout<<"::::::::: MENU ::::::::::\n";
    cout<<"1). enque\n";
    
    while(1){
        int a;
        cout<<"Enter Your Choice\n";
        cin>>a;
    switch(a){
        case 1:
        cout<<"Enter Data\n";
        int data;
        cin>>data;
        queue1.enqueue(data);
        break;

        case 2:
        queue1.dqueue();
        break;

        case 3:
        queue1.front();
        break;

        case 4:
        queue1.empty();
        break;

        case 5:
        queue1.Size();
        break;

        case 6:
        queue1.display();
        break;

        case 7:
        exit(1);
        break;
        
    }
    }

}