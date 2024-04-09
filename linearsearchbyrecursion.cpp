#include<bits/stdc++.h>
using namespace std;
bool linearSearch (int arr[],int size,int key){
    // BASE CASE:--
    if(size==0)
    return false;
    if(arr[0]==key)
    return true;
    else{
        bool remainingPart=linearSearch(arr+1,size-1,key);
        return remainingPart;
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
    bool ans=linearSearch(arr,n,key);
    if(ans){
        cout<<"element is present"<<endl;
    }
    else cout<<"element is not present\n";

    
}