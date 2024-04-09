#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int *arr,int s,int e,int k){
    // BASE CASE:-

    // element not found
    if(s>e)
    return false;

    int mid = s + (e-s)/2;
     
    // element found
    if(arr[mid]==k)
    return true;
    
    if(arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);
    }
    else {
        return binarysearch(arr,s,mid-1,k);
    }
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
    cout<<"enter the key\n";
    int key;
    cin>>key;
    bool ans=binarysearch(arr,0,n-1,key);
    if(ans){
        cout<<"element is present"<<endl;
    }
    else cout<<"element is not present\n";

}