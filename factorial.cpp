#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0)
    return 1;

    int chotiproblem=factorial(n-1);
    int biggerproblem=n*chotiproblem;
    return biggerproblem;
}
int main()
{
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
}