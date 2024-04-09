#include<bits/stdc++.h>
using namespace std;
int solve(int *arr,int size,int k){
    deque<int>max(k);
    deque<int>mini(k);
    for(int i=0;i<k;i++){
        while(!max.empty() && arr[max.back()]<=arr[i])
        max.pop_back();

        while(!mini.empty() && arr[mini.back()]>=arr[i])
        mini.pop_back();

        max.push_back(i);
        mini.push_back(i);
    }
    int ans=0;
    vector<int>sum;
    ans+=arr[max.front()]+arr[mini.front()];
    sum.push_back(arr[max.front()]+arr[mini.front()]);

    // Next Window:-
    for(int i=k;i<size;i++){

        //removal:-
        while(!max.empty() && i-max.front()>=k){
            max.pop_front();
        }
        while(!mini.empty() && i-mini.front()>=k){
            mini.pop_front();
        }

        // addition
        while(!max.empty() && arr[max.back()]<=arr[i])
        max.pop_back();

        while(!mini.empty() && arr[mini.back()]>=arr[i])
        mini.pop_back();

        max.push_back(i);
        mini.push_back(i);
        
        ans+=arr[max.front()]+arr[mini.front()];
        sum.push_back(arr[max.front()]+arr[mini.front()]);
    }
    for(int i=0;i<sum.size();i++){
        cout<<sum[i]<<" ";
    }
    cout<<endl;
    cout<<"Total sum:- ";
    return ans;
}
int main()
{
    int arr[7]={2,5,-1,7,-3,-1,-2};
    int k=4;
    cout<<solve(arr,7,k)<<endl;
}