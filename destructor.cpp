#include<bits/stdc++.h>
using namespace std;
class hero{
    public:
    hero(){
        cout<<"constructor is called\n";
    }
    // calling destructor:
    ~hero(){
        cout<<"destructor is called\n";
        
    }
};
int main()
{   // static 
    hero a;
    // dynamic
    hero *b =new hero();
    delete b;
}
