/*
n Chefland, a football player gets 
2
2 points for each goal and 
1
1 point for each assist.
Messi has A goals and B assists this season, whereas Ronaldo has X goals and 
Y assists.
Find out the player with more points this season.

Input Format
The first and only line of input will contains four space-separated integers 
A 
B 
X and
Y
the number of goals and assists that Messi has and the number of goals and
 assists that Ronaldo has, respectively.
Output Format
Print a single line containing:

Messi, if Messi has more points than Ronaldo.
Ronaldo, if Ronaldo has more points than Messi.
Equal, if both have equal points.
You can print each character in uppercase or lowercase. For example, the strings Messi,
 MESSI, messi, and MeSSi are considered identical.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,X,Y;
    cin>>A>>B>>X>>Y;
    if((A*2+B)>(X*2+Y))
    cout<<"messi";
    else if ((A*2+B)==(X*2+Y))
    cout<<"equal";
    else cout<<"ronaldo";
}





