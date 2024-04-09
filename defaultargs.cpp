#include<bits/stdc++.h>
using namespace std;
// if we want to make default argument we always made the right most 
// argument as the default argument 1st
void func(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    func(arr,size);   
    // if we do not pass 3rd argument it will take default argument as 0.
    // if we pass the 3rd argument then it will not take default argument.
               
}