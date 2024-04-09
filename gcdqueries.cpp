//LECTURE:- 21 CODE SHELF PROBLEM ON PREFIX COMPUTATION code no. gcdq:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"enter the number of test cases \n";
    cin>>t;
    while (t--){
        int n,q;
        cout<<"enter the size of array\n";
        cin>>n;
        int a[n+10];
        cout<<"enter the number of queries\n";
        cin>>q;
        for (int i=1;i<=n;i++){
            cout<<"enter the value of["<<i<<"]\n";
            cin>>a[i];
        }
        while(q--){
            int l,r;
            cout<<"enter the value of l,r\n";
            cin>>l>>r;
            // now basically we have to find the h.c.f of l & r;
            // in c++ there is inbuilt function for calculating gcd.
            // so we are not going to main function of gcd.
            int gcd=0;
            for(int i=1;i<=l-1;i++){
                gcd=__gcd(gcd,a[i]);
            }
            for(int i=r+1;i<=n-1;i++){
                gcd=__gcd(gcd,a[i]);
            }
             cout<<"required gcd of l,r is\n";
             cout<<gcd;
        }
       
    }

}