#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={5,3, 6, 8, 5, 7};
    int a=*max_element(v.begin(),v.end());
    cout<<*max_element(v.begin(),v.end());
}
















#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
};
bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
         for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        int i=0;
        int count=1;
        vector<int>store;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                count++;
            }else{
                store.push_back(count);
                count=1;
            }
        }
        if(arr[arr.size()-1]==arr[arr.size()-2]){
            
        }
        else{
            store.push_back(1);
        }
        sort(store.begin(),store.end());
          cout<<endl;
        for(int i=0;i<store.size();i++){
            cout<<store[i]<<" ";
        }
        cout<<endl;

        for(int i=0;i<store.size()-1;i++){
            if((store[i]^store[i+1])==0){
                return false;
            }
        }
        cout<<endl;
        for(int i=0;i<store.size();i++){
            cout<<store[i]<<" ";
        }
        cout<<endl;
        return true;
    }
int main()
{
    vector<int>v={-3,0,1,-3,1,1,1,-3,10,0,10};
    cout<<uniqueOccurrences(v);

}