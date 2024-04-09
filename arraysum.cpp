#include<bits/stdc++.h>
using namespace std;
int getSum(int arr[],int size){
    // BASE CASE:--
    if(size==0){
        return 0;
    }
    if(size==1)
    return arr[0];

    int remainingPart=getSum(arr+1,size-1);
    int sum=arr[0]+remainingPart;
    return sum;
}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int *arr=new int [n];
    cout<<"enter the elements of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int ans=getSum(arr,n);
    cout<<"the sum of array is "<<ans<<endl;
}