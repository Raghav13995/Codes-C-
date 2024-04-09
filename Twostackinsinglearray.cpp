#include<bits/stdc++.h>
using namespace std;
class TwoStack{
    int *arr;
    int size;
    int top1;
    int top2;
    // Initializing Two Stack:-
    public:
    TwoStack( int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }

    // Push in Stack 1:-
    void push1(int element){

        // Atleast a Empty Space is Present:-
        if(top2-top1>1){
        top1++;
        arr[top1]=element;
        }
        else
        cout<<"Stack Overflow\n";
    }

    // Push in Stack 2:-
    void push2(int element){
        if(top2-top1>1){
        top2--;
        arr[top2]=element;
        }
        else
        cout<<"Stack Overflow\n";
    }
    void pop1(){
        if(top1>=0){
            top1--;
        }
    }
    void pop2(){
        if(top2<size){
            top2++;
        }
    }

    void print1(){
        if(top1>=0){
            for(int i=top1;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else cout<<"Empty Stack\n";
    }
    void print2(){
        if(top2<=size){
            for(int i=top2;i<size;i++){
                cout<<arr[i]<<" ";
                
            }
            cout<<endl;
        }
        else cout<<"Empty Stack\n";
    }



};
int main()
{   cout<<"Enter the Size of Stack\n";
    int size;
    cin>>size;
    TwoStack s(size);
    int a;
    
    cout<<":::::: MENU ::::::\n";
    cout<<"1). Push for Stack 1\n";
    cout<<"2). Push for Stack 2\n";
    cout<<"3). Pop for Stack 1\n";
    cout<<"4). Pop for Stack 2\n";
    cout<<"5). Print Stack 1\n";
    cout<<"6). Print Stack 2\n";
    cout<<"7). Exit\n";
    while(1){
        cout<<"enter the Number\n";
        cin>>a;
        switch(a){
            case 1:
            cout<<"enter the element for stack 1\n";
            int element1;
            cin>>element1;
            s.push1(element1);
            break;

            case 2:
            cout<<"enter the element for stack 2\n";
            int element2;
            cin>>element2;
            s.push2(element2);
            break;

            case 3:
            s.pop1();
            break;

            case 4:
            s.pop2();
            break;

            case 5:
            s.print1();
            break;

            case 6:
            s.print2();
            break;

            case 7:
            exit(1);
            break;
        }
    }

}