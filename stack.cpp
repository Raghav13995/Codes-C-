#include<iostream>
#include<stack>
using namespace std;
int main()
{   
    // Creation of Stack by STL:--
    stack<int>s;

    // Some Functions of Stack:-
    // Push:- s.push(2) - insert element at top.
    // Pop:- s.pop() - removes the top elements.
    // Top:- s.top() - access the top element.
    // Empty:- s.empty - checks whether the underlying container is empty
    //         return true or false.
   
    cout<<"Applying all the functions of stack:-\n";

    // push operation:-
    s.push(2);
    s.push(3);

    // Top operation:-
    cout<<"Top element of stack- "<<s.top()<<endl;

    // Pop operation:-
    s.pop();
    cout<<"after pop\n";
    cout<<"Top element of stack- "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty\n";
    }
    else{
        cout<<"stack is not empty\n";
    }

    // Size operation:--
    cout<<"Size of stack is - "<<s.size()<<endl;
    cout<<":::..:::\n";


    // Now I want to implement Stack without using 
    // STL :--

    // There are 2 ways to implement Stack without STL :::-
    //   1). Array.
    //   2). Linked list.
}