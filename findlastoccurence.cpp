#include<bits/stdc++.h>
using namespace std;
int lastocc(int arr[],int size,int start,int key,int &ans){
    if(start==size){
        return ans;
    }
    int boolean=false;
    for(int i=start;i<size;i++){
        if(arr[i]==key){
            ans=i;
            boolean=true;
            //cout<<"hi"<<ans<<endl;
            break;
        }
   
    }
     if(boolean==false){
        return ans;
    }
    lastocc(arr,size,ans+1,key,ans);
    return ans;
}
int main()
{
    int arr[5]={1,5,9,5,6};
    int ans=0;
    cout<<lastocc(arr,5,0,5,ans);

}