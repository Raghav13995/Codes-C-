#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int i=0;
	    int j=n-1;
	    int ans=0;
	    int store=-1;
        cout<<"hi";
	    while(j!=0){
            if(i==store){
	            j--;
                i=0;
	            
	        }

	        if(i>=j){
	            store=i;
	            i=0;
	        }
	        
	        else if(arr[i]>arr[j]){
	            ans++;
	            j--;
	        }
	        else{
	            i++;
	        }
	    }
	    cout<<ans<<endl;
	}

}