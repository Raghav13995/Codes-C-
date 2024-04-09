/*
Problem
Each item in Chef’s menu is assigned a spice level from 
1
1 to 
10
10. Based on the spice level, the item is categorised as:

MILD: If the spice level is less than 
4
4.
MEDIUM: If the spice level is greater than equal to 
4
4 but less than 
7
7.
HOT: If the spice level is greater than equal to 
7
7.
Given that the spice level of an item is 
�
X, find the category it lies in.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of an integer 
�
X — the spice level of the item.
Output Format
For each test case, output on a new line, the category that the item lies in.

You may print each character in uppercase or lowercase. For example, HOT, hot, Hot, and hOT are all considered the same.

Constraints
1
≤
�
≤
1000
1≤T≤1000
1
≤
�
≤
10
1≤X≤10
Sample 1:
Input
Output
4
4
1
6
9
MEDIUM
MILD
MEDIUM
HOT
Explanation:
Test case 
1
1: The spice level is greater than 
4
4 but less than 
7
7. Thus, it is in MEDIUM category.

Test case 
2
2: The spice level is less than 
4
4. Thus, it is in MILD category.

Test case 
3
3: The spice level is greater than 
4
4 but less than 
7
7. Thus, it is in MEDIUM category.

Test case 
4
4: The spice level is greater than 
7
7. Thus, it is in HOT category.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int spicelevel;
        cin>>spicelevel;
        if(spicelevel<4){cout<<"MILD\n";}
        else if (spicelevel>=4 && spicelevel<7){cout<<"MEDIUM\n";}
        else if(spicelevel>=7){cout<<"HOT\n";}
    }
}