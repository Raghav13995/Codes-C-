#include<bits/stdc++.h>
#include<unistd.h>
//In the C and C++ programming languages, unistd.h is the name of the header file 
//that provides access to the POSIX operating system API. It is defined by the POSIX.
//1 standard, the base of the Single Unix Specification, and should therefore be 
//available in any POSIX-compliant operating system and compiler.
using namespace std;
int main()
{
    int pwd,i;
    again:
    for(int i=0;i<=5;i++){
        cout<<"enter your password\n";
        cin>>pwd;
        if(pwd==4141){
        cout<<"welcome";
        break;
        }
        else{
            cout<<"incorrect password\n";
        } 
        
    }
    if(pwd!=4141){
            cout<<"you have enter the wrong password many times\n";
            cout<<"please wait for 30 seconds to retry again\n";
            sleep(30);
            goto again;
        }

}