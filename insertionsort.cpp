#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the element of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){ 
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                // shift
                arr[j+1]=arr[j];
            }
            else // ruk jao
            break;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}

// why insertion sort?
// - it is stable 
// - it is adeptable.
