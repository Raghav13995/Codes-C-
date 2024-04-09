#include<bits/stdc++.h>
using namespace std;
bool findRedundantBrackets(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];

        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(ch);
        }
        else{
            // There will be closing tag ')' or alphabets.
            if(ch==')'){
                bool isredundant=true;

                while(st.top()!='('){
                    char top=st.top();
                    if(top=='(' || top=='+' || top=='-' || top=='*' || top=='/'){
                        isredundant=false;
                    }
                    st.pop();
                }
                if(isredundant==true){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
int main()
{
    string s;
    cout<<"enter the string\n";
    cin>>s;
    if(findRedundantBrackets(s)){
        cout<<"Redundant Brackets Present\n";
    }
    else{
        cout<<"Redundant Brackets not Present\n";
    }
}