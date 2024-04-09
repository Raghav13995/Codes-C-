#include<bits/stdc++.h>
using namespace std;
int main()
{  //           LECTURE 5:::Overflow, Precision Errors, Calculation Order 
              /*rough range of data type
               -10^9 < int <10^9
               -10^12 < LONG int < 10^12
               -10^18 < LONG LONG int < 10^18

              */
 //int a,b,c;
 // a=100000,b=100000;
  //c=a*b;
 // cout<<c;
 //since the limit of int is upto 1000000000 so int is going overflow
 /*int mx=INT_MAX;
 cout<<mx;
 cout<<mx+1;*/
 /*int mx=INT_MAX+1;
 cout<<mx;*/
 /*double a,b,c;
 a=200000,b=200000; 
 c=a*b;
 cout<<c<<endl;
 cout<<fixed<<c<<endl;
 cout<<setprecision(0)<<c;
}*/
/*double a=1e24;
cout<<a<<endl;
cout <<fixed<<a<<endl;
cout<<setprecision(0)<<a;
//so here value of a in fixed form is not correct it is approx to that real value...//
*/
//to calculate the area of rectangle whose length and breadth are of range 10^9
/*int l,b;
cin>>l>>b;
cout<<l*1LL*b;*/
//if we do not use 1LL then there will be the condition of overflow.B/c int *int will also be int
//
//
//one more option is
/*long long int l,b;
cin>>l>>b;
cout<<l*b;
*/
//cout<<INT_MIN<<endl;
//cout<<INT_MAX;




}