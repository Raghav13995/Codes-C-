//LECTURE 20:- Pre-Computation using Prefix Sum in 1D/2D Arrays.
/*
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int main()
{
   
   // Given array a of N integers. Given Q queries  and in each query given L and R 
    //print sum of array elements from index L to R(L,R included)

    //constraints:-
    //1 <= N <= 10^5
    //1 <= a[i] <= 10^9
    //1 <= Q <= 10^5
    //1 <= L, R <= N

   // here we are using 1 base array so that its not being so confusing. 
   int n;
   cout<<"enter the number of elements in array\n";
   cin>>n;
   for(int i=1;i<=n;i++){
    cout<<"enter the value of a["<<i<<"]\n";
    cin>>a[i];
   }
   int q;
   cout<<"enter the number of test cases\n";
   cin>>q;
   while(q--){
    int l,r;
    cout<<"ener the value of l and r\n";
    cin>>l>>r;
    long long sum=0;
    for(int i=l;i<=r;i++){
        sum+=a[i];
    }  
    cout<<sum<<endl;

   }

// complexity is O(N) + O(Q*N) = 10^10.
}
*/



//  by doing it with prefix sum..

/*
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int prefix[N];
int main()
{
    int n;
    cout<<"enter the number of elements in array\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"enter the element of array\n";
        cin>>a[i];
        prefix[i]=prefix[i-1]+a[i];
    }
    int q;
    cout<<"enter the no of test cases\n";
    cin>>q;
    while(q--){
        int l,r;
        cout<<"enter the value of l & r\n";
        cin>>l>>r;
        cout<<"ans is ";
        cout<<prefix[r]-prefix[l-1]<<endl;
    }
    // now the complexity.
    // O(N) + O(Q) = 10^5.

}*/

  

  // NOW FOR 2D ARRAY.

  /*
  GIVEN 2D ARRAY a OF N*N INTEGERS. GIVEN Q QUESRIES AND IN EACH GIVEN a,b,c AND d PRINT SUM OF SQUARE REPRESENTED BY(a,b)
  AS TOP LEFT POINT AND (c,d) AS TOP BOTTOM RIGHT POINT
  CONTRAINTS:-
  1 <= N <= 10^3
  1 <= a[i][j] <= 10^9
  1 <= Q <= 10^5
  1 <= a,b,c,d <= N
  */

 // by bormal methods

 #include<bits/stdc++.h>
 using namespace std;
 const int N=1e3+10;
 int ar[N][N];
 int main()
 {
    int n;
    cout<<"enter the size of the 2D array \n";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"enter the value of ar["<<i<<"]["<<j<<"] \n";
            cin>>ar[i][j];
        }
    }
    cout<<"enter the number of testcases\n";
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cout<<"enter the value of a,b,c,d\n";
        cin>>a>>b>>c>>d;
        long long sum=0;
        for(int i=a;i<=c;i++){
            for(int j=b;j<=d;j++){
                sum=sum+ar[i][j];
                
            }
        }
         cout<<"the final value of ans is\n";
         cout<< sum<<endl;
    }

 }