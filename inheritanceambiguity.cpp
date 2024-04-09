#include<bits/stdc++.h>
using namespace std;
class A {
    public:
    void funct(){
    cout<<"i m A\n";
    }
};
class B{
    public:
    void funct(){
        cout<<"i m B \n";
    }
};
// if there is same function in the diferent class then this called inheritance ambuguity.
class c:public A,public B{

};
int main()
{
    c obj;
    // obj.funct(); // in this case it will show ambiguity.
    
    obj.A::funct();   // so we have to mention the class .
    obj.B::funct();
}