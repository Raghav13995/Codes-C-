/*
      LECTURE: 18 Pre-Computation Techniques Basics & Hashing .
*/
/*
given T test cases and in each test cases a number N.print its factorial
for each case % M 
where M = 10^9 + 7
constraints
1 <= T <=10^5
1 <= N <=10^5

*/
/*
#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
typedef long long ll;
int main()
{
    // for the factorial problem ::
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll fact=1;
        for(int i=2;i<=n;i++){
        fact=(fact*i)%M;
        }
        cout<<fact<<endl;
    }
}*/
// but while observing the time complexity of these solution
// O(t*n)==10^10.
// so how can we solve this problem , lets see
/*
#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
long long fact[N];
int main()
{
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=fact[i-1]*i;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n];
    }
    
}*/
// now here time complexity is
// O(N) + o(T) = 10^5+10^5.
// so this is the solution of this problem
// so what we have done here we precompute the value 


// NOW MOVING TOWARDS HASHING ::

/*
given array a of N integers. given Q queries and in each query given a number X,
print count of that number in array.
constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/
// 1st solving without seeing towards time complexity:
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no of elements in the array\n";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array one by one\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cout<< "no of test cases or queries\n";
    cin>>q;
    while(q--){
        cout<<"enter the number which u want to count\n";
        int x;
        cin>>x;
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]==x)
            count++;
        }
        cout<<"the number u enter occuring ";
        cout<<count<<" times\n";

    }
   

}
*/
// CALCULATING THE TIME COMPLEXITY OF THIS IS
//  O(N) + O(Q*N) = O(N^2) = 10^10.
// SO THIS CODE WILL NOT RUN. 

// NOTE:- WE CAN USE HASHING WHEN THE SIZE OF ARRAY IS OF RANGE 10^7 SO THAT WE CAN DECLARE 
//        IT GLOBALLY OTHERWISE WE CANT DECLARE ARRAY OF SIZE GREATER THAN IT.


// NOTE:- IF WE ARE DECLARING THE ARRAY GLOBALLY THEN THE ELEMENTS OF ARRAY ARE ALWAYS 0 BEFORE 
//        WE CHANGE IT IN THE CODE.
/*
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hsh[N];
int main()
{
    int n;
    cout<<"no. of elements in the array\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cout<<"enter the elements one by one \n";
    cin>>a[i];
    hsh[a[i]]++;
    }
    cout<<"the number of test cases \n";
    int q;
    cin>>q;
    while(q--){
        cout<<"enter the no which u want to count in the array \n";
        int x;
        cin>>x;
        cout<<"the number occurs ";
        cout<<hsh[x]<<" times"<<endl;
    }
  
}*/
// NOW THE TIME COMPLEXITY IS O(N) + O (Q) = O(N) = 2*10^5



















  

