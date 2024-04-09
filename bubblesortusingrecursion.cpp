#include<bits/stdc++.h>
using namespace std;
void sortarray(int *arr,int n){

    // base case:-- 
    if(n==0 || n==1){
        return;
    }
    // 1st case solve karlia - largest element ko end me rakh dega
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    // recursive code:-- 
    sortarray(arr,n-1);
}
int main()
{   int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the element of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortarray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}