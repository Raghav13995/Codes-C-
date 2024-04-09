#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int target;
    int sum=0;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;j++){
            if (arr[i]+arr[j]==target){
                sum++;
            }
        }
    }
    cout<<sum<<endl;
}