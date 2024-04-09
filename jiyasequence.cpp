#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long product=1;
    cout<<"total no. of test cases"<<endl;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"how many digit in a no"<<endl;
        int x;
        cin>>x;
        for(int j=1;j<=x;j++){
            int n;
            cout<<"enter the value of digit one by one";
            cin>>n;
            product=product*n;
        }
        cout<<product<<endl;
        if(product%10==(2)|| product%10==(3)|| product%10==(5))
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
        product=1;
    }
}