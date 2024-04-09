#include<bits/stdc++.h>
using namespace std;
vector<int> NextSmallerElement(vector<int>&arr,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()>=curr){
            s.pop();
        }
        // Ans is stack ka top
        ans.push_back(s.top());       
        s.push(curr);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
   vector<int>arr;
    int N;
    cout<<"enter the size of array\n";
    cin>>N;
    cout<<"enter the elements\n";
    for(int i=0;i<N;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    cout<<"before\n";
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"after:"<<endl;
    vector<int>ans;
    ans=NextSmallerElement(arr,N);
    cout<<"hi"<<ans[0]<<" "<<ans[1]<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}