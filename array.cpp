#include<bits/stdc++.h>
using namespace std;
const int n=1e8;
int a[n];
int main()
{/*
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<sum;
*/

//2D ARRAY DECLARATION::::
/*
int n,m;
cin >>n>>m;
int a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j]<<" ";

    }
    cout<<endl;
}
*/

//if we are declaring the array locally the the size of array is of order of 10^5..


/*int n=1e7;
  int a[n];
  a[n-1]=9;
  cout<<a[n-1];*/
// there is segmentation fault due overflow of array.
  
/* int n=1e5;
   int a[n];
   a[n-1]=9;
   cout<<a[n-1];*/
//there is no segmentation error..

// but if we declare the array globally.

a[n-1]=7;
cout<<a[n-1];


}