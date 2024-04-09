#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i;
        while(j){
            cout<<" ";
            j--;
        }
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        j=j-2;
        while (j>=1)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
}