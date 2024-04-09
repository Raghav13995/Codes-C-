#include<bits/stdc++.h>
using namespace std;
int countDistinctWayToClimbStair(int nstairs){
    // BASE CASE:--
    if(nstairs<0)
    return 0;
    if (nstairs==0)
    return 1;

    // RECURSION CODE:--
    int ans=countDistinctWayToClimbStair(nstairs-1)
    +countDistinctWayToClimbStair(nstairs-2);

    return ans;
}
    
int main()
{   int t;
    cin>>t;
    while(t--){
    int nstairs;
    cout<<"enter the number of stairs\n";
    cin>>nstairs;
    cout<<"ans- "<<countDistinctWayToClimbStair(nstairs)<<endl;
}
}