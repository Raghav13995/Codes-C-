#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];

    // copy values:-
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
     
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    // merging two sorted array:--
    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while(index1<len1&&index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    // ho sakta hai dono mai se kisi ki length jyada ho
    // toh hum alag se bhi check karenge.

    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++]=second[index2++];
        delete[]first;
        delete[]second;
    }

}
void mergeSort(int *arr,int s,int e){
    // base case:--
    if(s==e){
        return;
    }
    int mid=(s+e)/2;

    // left part sort karna h
    mergeSort(arr,s,mid);

    // right part sort krna h
    mergeSort(arr,mid+1,e);

    // merge
    merge(arr,s,e);
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
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}