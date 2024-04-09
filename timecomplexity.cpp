#include<bits/stdc++.h>
using namespace std;
int main()
{
    // LECTURE :15  Time Complexity Analysis and Constraints
    /*
     int x;         //this is also an iteration
     int sum=0;     //this is also an iteration   these all are three are const time operation
     sum = x+x;     //this is also an iteration   which means one require 1 unit time for execution.
     // so there are 3 iterations.
     // to calculate the complexity of the code we must have the 
     //measure of the idea of no of iteration.
     // so here we define time complexity as O(3)-- where 'O' define time compexity and 3 means no of iteration
     // 
     // now if we increase the iterations:
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        int y;
        y=5;
        y++;

     }*/
     // so now here in loop there are 3 iteration so total iteration for loop are 3*n
     // so total iteration for the program are O(5)+O(3*n)===O(n) {where n is very larger than 3}
     //
     // O(N)+O(N)=O(N).
     // O(k*N)=O(N)  {k<<N}
     //
     // 
     // for eg.   O(3)-O(4)+O(5)+O(10)===O(1)  we can consider it 1 


     // FOR ONLINE SITES 
     //  NUMBER OF ITERATIONS IN 1 SEC = 10^7-10^8:
     // 10^7 - 1 SEC
     // 10^8 - 10 SEC
     // 10^9 - 100 SEC
     // 10^10 - 1000 SEC
     /*int ct=0;
     for(int i=0;i<n;i++){          // so complexity of these loop is O(n^2).
        for(int i=0;i<n;i++){
            ct++;
        }
        
     }*/

    /* int n;
     int ct=0;                      // 10 - 5 - 2 - 1 - 0 so we can divide this no. 3 times by 2
     int ct=0;                      // 8 - 4 - 2 - 1 - 0 so we can divide this no. 3 times by 2
     while(n>0){                    //so we can write
        n=n/2;                      // 2^a = n  (where a means how many times no. is  divided by 2)
        ct++;}   */                  // a basically gives the complxity of the loop.
                                   // log(base 2)2^a=log(base 2)n
                                    // a=log(base 2)n

     //so O(1)+O(1)+O(log(base 2)n)
     // so if n=100000 then time complexity will be log(base 2)10^5==15.

     // LETS SEE ONE MORE EXAMPLE::

    /* int n;
     cin>>n;
     int ct=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){

        }
     }*/
    // so now what will be complexity of this lets calculate;
    /*
    i=1 , 1
    i=2 , 2
    i=3 , 3
    i=4 , 4
    .
    .
    i=n , n

    so the will run 1+2+3+.....+n times = n(n+1)/2 times = n^2/2 + n/2.
    so the complexity will be 
    O(1) + O(1) + O(1) + O(n^2/2) + O(n/2) ==== O(n^2):
    so this loop also have the complexity of n^2.
    
    */

 /*
 GIVEN T TEST CASES AND AN ARRAY OF SIZE N. PRINT SUM OF ARRAY IN EACH TEST CASE.
 CONSTRAINTS:
 1 <= T <=1000 
 1 <= N <=1000 
 1 <= a[i] <=1000 

 */
 /*int t;
cin>>t;
while(t--){
    int n;
    cin >> n;
    int sum = 0;
    for (int i=0;i<n;i++){
        int x;
        sum+=x;
    }
    cout<<sum<<endl;

}*/
// time complexity of this is O(T*N) = O(N^2) b/c range of T & n are same
// 
//now if in above question constraints are changed to
// 1 <= T <=100000
// 1 <= N <=100000 
//1 <= a[i] <=100000
// so this code will not run in this conditions. 


// BUT IF WE ADD ONE CONDITION IN THIS THEN::
// 1 <= T <=100000
// 1 <= N <=100000 
// 1 <= a[i] <=100000
// sum of N over all test cases is < 10^7:
  
  // then the code will pass b/e time complexity inthis is eqaul to 10^7.



    }