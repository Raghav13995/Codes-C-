/*Cheems doesn't like extra content so coming straight to the point. 
Given the input of one line, having words separated by a single space,
 print each word of the input, each in a new line.
Also, change all the alphabets to uppercase along with doing this.

Input:-
Given in one line, all letters are lowercase only, separated by a single space.

Characters used in input are from 'a' to 'z' only ( 26 in total ). */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    cout<<a.size()<<endl;
    string b;
    for(int i=0;i<a.size();i++){
    if(a[i] !=' '){
        b.push_back(a[i]-32);
    }
    else{
    cout<<b<<endl;
    b="";}
    }
    cout<<b; 
}