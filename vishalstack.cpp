#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   
    while(t--){
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        vector<int>x={(a1),(a2),(a3)};
        vector<int>y={(b1),(b2),(b3)};
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        int s1=0;
        int s2=0;
        int z=1;
        for(int i=0;i<3;i++){
            s1=s1+x[i]*z;
            s2=s2+y[i]*z;
            z=z*10;
        }
           if(s2>s1){
        cout<<"BOB"<<endl;
    }
    else if(s2<s1){
        cout<<"Alice"<<endl;
    }
    if(s2==s1){
        cout<<"Tie"<<endl;
    }
              
    }
 
}