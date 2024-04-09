/*
FIND A and B
You are given three distinct positive integers 
�
,
�
,
X,Y, and 
�
Z. Your task is to find integers 
�
A and 
�
B such that:

�
B is equal to one of the three given numbers;
�
A is equal to the product of remaining two numbers;
�
A is divisible by 
�
B.
Print 
�
A and 
�
B which satisfy the given conditions. If no such pair of 
�
A and 
�
B exists, print 
−
1
−1 instead.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
The only line of each test case contains three space-separated integers 
�
X,
�
Y, and 
�
Z.
Output Format
For each test case, print two space-separated integers 
�
A and 
�
B which satisfy the given conditions. If no such pair of 
�
A and 
�
B exists, print 
−
1
−1 instead.

If there are multiple possible answers, you may print any one of them.

Constraints
1
≤
�
≤
1
0
5
1≤T≤10 
5
 
1
≤
�
,
�
,
�
≤
1
0
4
1≤X,Y,Z≤10 
4
 
�
,
�
,
X,Y, and 
�
Z are distinct.
Sample 1:
Input
Output
2
6 2 4 
5 7 3
12 4
-1
Explanation:
Test case 
1
1: Consider B=4 and 
�
=
6
⋅
2
=
12
A=6⋅2=12. Here 
�
=
12
A=12 is divisible by 
�
=
4
B=4.

Test case 
2
2: No possible pair of 
�
A and 
�
B exists.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
    int X,Y,Z;   //three distinct positive integers X,Y,Z.
    int A,B;     //B is equal to one of the three given numbers
                 //A is equal to the product of remaining two numbers
                 //A is divisible by B
while(t--){
    cin>>X>>Y>>Z;
    if(X*Y%Z==0)
    cout<<X*Y<<endl<<Z<<endl;
    else if(Y*Z%X==0)
    cout<<Y*Z<<endl<<X<<endl;
    else if(X*Z%Y==0)
    cout<<X*Z<<endl<<Y<<endl;
    else cout<<"-1"<<endl;
}



}