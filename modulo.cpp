/*
TOPICS::

- WHY PRINT ANSWER MODULO M ?
- MODULATOR ARITHMETIC
- WHY M = 10^9+7

*/ 

/*
(a+b) % M = ((a % M) + (b % M)) % M 
(a*b) % M = ((a % M) * (b % M)) % M) 
(a-b) % M = ((a % M) - (b % M) + M) % M) 
but for division it is different.
(a+b) % M = ((a % M) * (b^-1)%M) % M 

b^-1  - multiplicative inverse.


*/

/*
Given a number N . print its factorial.
constraints
1 <= N <= 100
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{ /*int n;
cin>>n;
long long fact=1;
for(int i=2;i<=n;i++){
    fact=fact*i;
}
cout<<fact;*/
   // but here in the presence of long long this also get overflow .
   // and we are not using double b/c of precision error.   
   
   // and question setter is known to this that it will get overflow so it would be 
   // asked as find the modulo of the ans with N
   /*
   Given a number N . print its factorial.
   constraints
   1 <= N <= 100
   print answer modulo M where M = 47
   */
int n;
cin>>n;
int M=47;
long long fact=1;
for(int i=2;i<=n;i++){
    fact=(fact*i)%M;
}
cout<<fact;

}















