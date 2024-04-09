#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(string s,int i,int j){
    // BASE CASE:--
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
        // recursive call
        return checkpalindrome(s,i+1,j-1);
    }
}
int main()
{
    string name;
    cout<<"enter the string\n";
    cin>>name;
    int size=name.length();
    bool ispalindrome=checkpalindrome(name,0,size-1);
    if(ispalindrome)
    cout<<"it is palindrome\n";
    else 
    cout<<"it is not palindrome\n";

}