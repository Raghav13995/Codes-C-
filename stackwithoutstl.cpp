#include<bits/stdc++.h>
using namespace std;
class Stack{
    // properties:-

    public:
    int *arr;
    int top;
    int size;

    // behavior :--
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else
        cout<<"Stack Overflow\n";
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow\n";
        }
    }

    void peek(){
        if(top>=0){
            cout<<"Value at Top "<<arr[top]<<endl;
        }
        else{
            cout<<"Stack is Empty\n";
        }
    }

    void isempty(){
        if(top==-1){
            cout<<"Empty Stackk\n";
        }
        else{
            cout<<"Stack is not Empty\n";
        }
    }

    void printstack(){
        if(top == -1){
            cout<<"Empty Stack\n";
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";          
        }
        cout<<endl;
    }

    void sizeofstack(){
        cout<<top+1<<endl;
    }
};
int main()
{
    cout<<"Enter the size of Stack ";
    int size;
    cin>>size;
    cout<<endl;

    // // creation of stack class:--
    // Stack s(size);
    // cout<<"enter the elements of stack\n";
    // for(int i=0;i<size;i++){
    //     int element;
    //     cin>>element;
    //     s.push(element);
    // }

    // // Now calling Functions:--
    // s.printstack();
    // s.isempty();
    // s.peek();
    // s.pop();
    // cout<<"after pop\n";
    // s.printstack();

    // cout<<"********"<<endl;
    // s.push(5);
    // s.printstack();

    // s.push(6);
    // s.printstack();
    // cout<<"size of stack -";
    // s.sizeofstack();

    // cout<<"********\n********\n";

    cout<<"Raghav Agrawal\n0801IT221104\n";
    Stack s2(size);
    cout<<":::::Creating the Menu:::::"<<endl;
    cout<<"Enter the Number\n";
    cout<<"1 -> push in a stack\n";
    cout<<"2 -> pop in a stack\n";
    cout<<"3 -> peak in a stack\n";
    cout<<"4 -> check empty stack\n";
    cout<<"5 -> Print Stack\n";
    cout<<"6 -> exit\n";
    cout<<endl;
    int a;
   
    while(1){
        cout<<"Enter the Number\n";
        cin>>a;
    switch(a){
        case 1:
        cout<<"Enter the Element\n";
        int element;
        cin>>element;
        s2.push(element);
        break;

        case 2:
        s2.pop();
        break;

        case 3:
        s2.peek();
        break;

        case 4:
        s2.isempty();
        break;

        case 5:
        s2.printstack();
        break;

        case 6:
        exit(1);
        }

    }


}