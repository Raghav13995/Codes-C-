#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r=10;
    int n=432;
    int p=n;
    int count=0;
    while(n>0){
        int s=n%10;
        count++;
        n=n/10;
    }
    cout<<"the value of count "<<count<<endl;
    int ans=pow(r,count);
    cout<<ans<<endl;
    cout<<(ans-p);
}