#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        double litre;
        litre=y/5.0;
        if(x>=litre){
            cout<<"yes\n";
                   }
         else 
         cout<<"no\n";
    }
}