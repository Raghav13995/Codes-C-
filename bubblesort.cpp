#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the element of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        // for round 1 to round n-1.
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            // process element till (n-i)th index.
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;
            }
        }
        if(swapped==false){
           // array is already sorted
            break;
            }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}