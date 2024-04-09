#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    queue<char>qe;
		    string ans;
		    map<char,int>count;
		    
		    for(int i=0;i<A.length();i++){
		        char ch=A[i];
		        count[ch]++;
		        qe.push(ch);
		        while(!qe.empty()){
		        if(count[qe.front()]>1){
		            qe.pop();
            // keep in mind pop aage se ho raha hai
		        }
		        else{
		            ans.push_back(qe.front());
		            break;
		        }
		       }
		       if(qe.empty()){
		           ans.push_back('#');
		       }
		        
		    }
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}