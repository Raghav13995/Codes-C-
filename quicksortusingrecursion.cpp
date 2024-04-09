#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }

    // placing pivot at the right place:--
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);

    // left and right wala part sambhal lete hai
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;  
        }
        if(i<pivotindex && j>pivotindex){
        swap(arr[i++],arr[j--]); 
        }
    }
    return pivotindex;
}
void quicksort(int arr[],int s,int e){
    // base case:--
    if(s>=e){
        return;
    }

    // partition karenge
    int p=partition(arr,s,e);

    // left part sort karenge
    quicksort(arr,s,p-1);

    // right part sort karenge
    quicksort(arr,p+1,e);
}
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
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}