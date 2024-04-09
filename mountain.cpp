#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    static int peakIndecMountainArray(vector<int>&arr){
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(arr[mid]<arr[mid+1])
            s=mid+1;
            else 
            e=mid;
            mid=s+(e-s)/2;
        }
        return s;
    }
};
int main()
{   
    vector<int>arr={12,45,56,65,78,54,51,32};
    int ans=solution::peakIndecMountainArray(arr);
    cout<<"the mountain element is "<<ans<<endl;
}