#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER THE SIZE OF ARRAY";
    cin>>n;
    pair<int,int>a[n];
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cin>>a[i].first>>a[i].second;
        if(a[i].first>a[i].second)
        swap(a[i].first,a[i].second);

    }
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    int x=0;
    for(int i=0;i<=sizeof(a)/sizeof(a[0]) -2;i++){
        if(a[i].second<a[i+1].first)
        x+=1;
    }
    cout<<x+1;
    
}