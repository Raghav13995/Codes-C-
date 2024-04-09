#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="raghav";
    stack<char>s;
    cout<<"before :- "<<str<<endl;
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }

    string ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    
    cout<<"after :- "<<ans<<endl;

}
// But in this :--
// Space Complexity is getting increase due to the creation of stack.::O(N)::.

// and time complexity is .:::O(N):::.