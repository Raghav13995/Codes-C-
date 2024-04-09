/*
Alice wrote an exam containing 
�
N true or false questions (i.e. questions whose answer is either true or false). Each question is worth 
1
1 mark and there is no negative marking in the examination. Alice scored 
�
K marks out of 
�
N.

Bob wrote the same exam but he marked each and every question as the opposite of what Alice did, i.e, for whichever questions Alice marked true, Bob marked false and for whichever questions Alice marked false, Bob marked true.

Determine the score of Bob.

Input Format
The first line contains a single integer 
�
T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers 
�
N and 
�
K — the total number of questions in the exam and the score of Alice.
Output Format
For each test case, output on a new line the score of Bob.

Constraints
1
≤
�
≤
2000
1≤T≤2000
1
≤
�
≤
100
1≤N≤100
0
≤
�
≤
�
0≤K≤N
Sample 1:
Input
Output
3
1 1
50 0
100 76
0
50
24
Explanation:
Test case 
1
1: There was one question in the exam and Alice answered it correctly. This means that Bob will surely answer it incorrectly. Therefore Bob's score is zero.

Test case 
2
2: Alice answered all the questions incorrectly, and so Bob will surely answer all the questions correctly. Therefore Bob's score is 
50
50.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y ; //x--total no. of question y--score of alice.
        cout << x-y<<endl;// score of bob.
    }
}