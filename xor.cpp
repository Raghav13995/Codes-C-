// My 1st solution:----------------
//
// #include <iostream>
// using namespace std;
// #include <vector>
// #include<bits/stdc++.h>
// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    vector<int>v;
// 	    for(int i=0;i<n;i++){
// 	        int data;
// 	        cin>>data;
// 	        v.push_back(data);
// 	    }
// 		if(v.size()==1)
// 	    {
// 			cout<<"0\n";
// 			continue;
// 		}
// 	    int ans=v[0];
// 	    for(int i=1;i<n;i++){
// 	        ans=ans^v[i];
// 	    }
// 	    //cout<<"a-"<<ans<<endl;
// 	    int element=v[0];
// 	    v.erase(v.begin());
// 	    int ans2=v[0];
// 	    for(int i=1;i<v.size();i++){
// 	        ans2=ans2^v[i];
// 	    }
//         //cout<<"a2-"<<ans2<<endl;
// 	    if(ans2<ans){
// 	        ans=ans2;
// 	    }
// 	    v.insert(v.begin(),element);
//         //cout<<"1-"<<v[0]<<endl;
// 	    ans2=v[0];
// 	    for(int i=1;i<n;i++){
// 	        element=v[i];
// 	        v.erase(v.begin()+i);
//             //cout<<"2-"<<v[1]<<endl;
// 	        for(int j=1;j<v.size();j++){
// 	        ans2=ans2^v[j];
// 	    }
//         if(ans2<ans){
// 	        ans=ans2;
// 	    }
//         v.insert(v.begin()+i,element);
// 	    ans2=v[0];
	        
// 	    }
// 	  cout<<ans<<endl;  
// 	}
// 	return 0;
// }

#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n,0);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int res=arr[0];
	    for(int i=1;i<n;i++){
	        res=res^arr[i];
	    }
	    if(res==0){
	        cout<<0<<endl;
	        continue;
	    }
	    else{
	        int ans=res;
	       for(int i=0;i<n;i++){
	           ans=ans^arr[i];
	           if(ans<res){
	               res=ans;
	               ans=res;
	           }
	           else{
	               ans=res;
	           }
	       }
	        cout<<res<<endl;
	    }
	    
	}
	return 0;
}