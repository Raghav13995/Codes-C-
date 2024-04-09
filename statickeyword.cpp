#include<bits/stdc++.h>
using namespace std;
class hero{
    public:
    // static member created.
    static int timetocomplete; 
    // static function created.
    static int random(){
        return timetocomplete;
    }
    // this member does not belong to object it belongs to class
};
// we have to initialize it down. 
int hero::timetocomplete = 5;
// (:: -> this is scope resolution operator)
int main()
{
    cout<<hero::timetocomplete<<endl;
    hero a;
    cout<<a.timetocomplete<<endl;// but this is not recommended
    hero b;
    b.timetocomplete=10;
    cout<<a.timetocomplete<<endl;
    cout<<b.timetocomplete<<endl;
    cout<<hero::random()<<endl;
}