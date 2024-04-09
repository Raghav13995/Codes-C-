#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,M;
	    cin>>N>>M;
	    vector<int>arr1;
	    vector<int>arr2;
	    for(int i=0;i<N;i++){
	        int data;
	        cin>>data;
	        arr1.push_back(data);
	    }
	    for(int i=0;i<M;i++){
	        int data;
	        cin>>data;
	        arr2.push_back(data);
	    }
	    sort(arr2.begin(),arr2.end());
	    int number=arr1.size()-arr2[arr2.size()-1];
	    sort(arr1.begin()+number,arr1.begin());
	    for(int i=0;i<arr1.size();i++){
	        cout<<arr1[i]<<" ";
	        }
	        cout<<endl;
	    
	}

}