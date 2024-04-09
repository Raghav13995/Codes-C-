#include<bits/stdc++.h>
using namespace std;
int main()
{
  //             LECTURE 6::::-Conditions, Loops, Jump Statements and Questions
  
  /*int a=2,b=3,c=4;
  cout <<(a==b)<<endl;
  cout <<(a!=b)<<endl;
  cout <<(a>b)<<endl;
  cout <<(a<b)<<endl;
  cout<<((c>a)&&(c>b))<< endl;
  cout<<((c>a)&&(b>c))<< endl;
  cout<<((c>a)||(b>c))<< endl;
*/

/*int n;
cin>>n;
if(n%2==0)
cout<<"divisible by 2";
else if(n%3==0)
cout<<"divisible by 3";
else
cout<<"no";
*/

//if the varible is declared in the if else loop thn it will ork only in the 
// loop.Same as for all thee loops.


//         WHILE LOOP
/*int i=1;
while(i<=10){
    cout<<i<<endl;
    i++;
}*/

        //  FOR LOOP

/*for(initialiation;condition;operation)
{

}*/

/*
for(int i=1;i<=10;++i)
cout<<i<<endl;
*/
//        NESTING OF LOOPS::

//solving star question for t no. of test cases ....
//*
//**
//***
//****
//

/*int t,n;
cin>>t;
while(t--){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
}*/
//    BREAK AND CONTINUE COMMANDS:::::

/*for(int i=1;i<=10;i++){
if(i==8){
    break;
}
if(i==4)
continue;
cout<<i<<endl;
}
*/
/*while(1){
    int i;
    cin>>i;
    if(i==42)
    break;
    cout<<i<<endl;
}
*/

//     TO CALCULATE SUM OF DIGIT OF A NUMBER:::

/*int n;
int digsum=0;
cin>>n;
for(int i=n;i>0;i++){
digsum= digsum+n%10;
n=n/10;
}
cout<<digsum;

*/


}