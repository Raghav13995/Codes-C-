#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int size,int key){
  int start=0;
  int end=size-1;
  int mid=(start+end)/2;
  while(start<end){
    if(arr[mid]==key)
    return mid;
    else if(arr[mid]>key)
    end=mid-1;
    else
    start=mid+1;
    mid=(start+end)/2;
  }
  if(start>end)
  return -1;
}
int main()
{
  cout<<"Raghav Agrawal\n0801IT221104\n";
  cout<<"Enter elements for Odd array\n";
  int *odd;
  odd=(int *)malloc(5*sizeof(int));
  for(int i=0;i<5;i++){
    cin>>odd[i];
  }
  cout<<"Enter elements for Even array\n";
  int *even;
  even=(int *)malloc(6*sizeof(int));
  for(int i=0;i<6;i++){
    cin>>even[i];
  }
  
  int evenIndex=binarysearch(even,6,4);
  int oddIndex=binarysearch(odd,5,5);
  cout<<"index of 4 in even array is  "<<evenIndex<<endl;
  cout<<"index of 5 in odd array is "<<oddIndex<<endl;
}

