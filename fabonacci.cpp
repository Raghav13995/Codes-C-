#include<bits/stdc++.h>
using namespace std;
// 0 1 1 2 3 5 8 13....
int fibonacci(int n){
    // BASE CASE:--
    if(n==1)
    return 0;
    if(n==2)
    return 1;

    int ans=fibonacci(n-1)+fibonacci(n-2);
    return ans;
}
int main()
{   int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    int ans = fibonacci(i);
    cout<<i<<"th term of fibonacci is\n"<<ans<<endl;
}
}