#include<bits/stdc++.h>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int even[5]={12,67,90,90,678};
    cout<<"first occurence of 90 is "<<firstOcc(even,5,90)<<endl;
    cout<<"last occurence of 90 is "<<lastOcc(even,5,90)<<endl;
    return 0;
}
// 847425
