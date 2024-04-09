// SET:-- 
// It always store the unique value.
// It arrange the value in a lexographic order.
// 
#include<bits/stdc++.h>
using namespace std;


void printset(set<string>&s){
    cout<<"Size- "<<s.size()<<endl;
    for(auto value : s){
        cout<<value<<endl;
    }
    for(string s : s){
        cout<<"M-2 "<<s<<endl;
    }

    set<string> :: iterator it=s.begin();
    while(it!=s.end()){
        cout<<"M-3 "<<(*it)<<endl;
        it++;
    }

    auto s2=s.begin();
    while(s2!=s.end()){
        cout<<"M-4 "<<(*s2)<<endl;
        s2++;
    }



}
int main()
{
    set<string>s;
    // to insert elements in sets:-
    s.insert("Raghav");    // ::log(N)::
    s.insert("Agrawal");
    s.insert("Love");
    s.erase("Agrawal");
    printset(s);

    cout<<"*************************************************************\n";
    auto a=s.find("Raghav");  // ::log(N)::
    if(a!=s.end())
    cout<<(*a)<<endl;


    auto b=s.begin();
    cout<<(*++b)<<endl;
    
    cout<<(*b)<<endl;

    


}