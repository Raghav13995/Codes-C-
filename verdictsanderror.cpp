#include<bits/stdc++.h>
using namespace std;
const int n=1e8;
int a[n];
const int N=1e4;
int b[N];
int main()
{
    //  1). IF THERE IS SYNTAX ERROR THEN SURE IT WILL SHOW COMPILATION ERROR..

    //  2). MEMORY LIMIT EXCEEDED ERROR.
    //      IF THE CODE REQUIRE MEMORY MORE THAN THE LIMIT FOR THE EXECUTION.THEN THIS ERROR OCCUR.
           /* for(int i=0;i<n;++i){
                a[i]=i;
            }
            cout<<a[n-1];*/
            //so if we increase the size of array then it will show memory error.



    // 3). RUN TIME ERROR.
    //     THIS OCCUR WHEN WE ARE TRYING TO GET THE VALUE WHICH IS OUT OF LIMIT. 
               /*  for(int i=0;i<4*N;++i){
                b[i]=i;
        
            } 
         cout<<b[N-1];
         //so this code shows error it is also called segmentation error.*/

         cout<<4/0;

}