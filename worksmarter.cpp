#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--){
    int l,v1,v2;
    cin>>l>>v1>>v2;
    float tortime=(float)l/v1 ;
    
    //cout<<tortime<<endl;
    float haretime=(float)l/v2 ;
   // cout<<"float"<<haretime<<endl;
    //cout<<haretime<<endl;
    int tortime2,haretime2;
    
    if (tortime>(int)tortime){
        tortime2=l/v1+1;
    }
    else tortime2=tortime;
    if (haretime>(int)haretime){
        haretime2=l/v2+1;
    }
    else haretime2=haretime;
// cout<<tortime2<<endl;    
// cout<<haretime2<<endl;
    if((tortime2-haretime2)>=2){cout<<tortime2-haretime2-1<<endl;}
    else if ((tortime2-haretime2)==1)
    cout<<tortime2-haretime2-1<<endl;
    else
    cout<<"-1"<<endl;
}
}