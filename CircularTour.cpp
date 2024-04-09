#include<bits/stdc++.h>
using namespace std;


struct petrolPump
{
    int petrol;
    int distance;
};
class Solution{
  public:
    int tour(petrolPump p[],int n)
    {
       int balance=0;
       int dificit=0;
       int start=0;
       for(int i=0;i<n;i++){
           balance=p[i].petrol-p[i].distance;
           if(balance<0){
               dificit=balance;
               start=i+1;
               balance=0;
           }
       }
       if(balance+dificit>=0){
           return start;
       }
       else{
           return -1;
       }
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
// we can also do it b the concept of front/rear.