#include<bits/stdc++.h>
using namespace std;
int main()
{
    // LECTURE 7::::C++ Strings, Getline and Big Numbers for Competitive Programming.
   
   
   /* string str="raghav";
    cout<<str<<endl;
    string str2;
    cin>>str2;
    cout<<str2<<endl;

    /*
    cout<<str+str2<<endl;
    if(str==str2)
    cout<<"equal";
    else
    cout<<"not equal";
   */ 

   /*
  cout<<str[0]<<endl;
  cout<<str[1]<<endl;
  cout<<str[2]<<endl;
  cout<<str[3]<<endl;
  cout<<str[4]<<endl;
  cout<<str[5]<<endl;
  cout<<str[6]<<endl;
  cout<<str[7]<<endl;


  str[4]='t';
  cout<<str<<endl;
   */

/*cout<<str.size();
for(int i=1;i<=str.size();i++)
{
    cout<<str[i]<<endl;
}*/
/*
string str1,str2,str3;
cin>>str1>>str2;
str3=str1+" "+str2;
cout<<str3;
*/
/*
string str1,str2;
getline(cin,str1);
getline(cin,str2);
cout<<str1<<endl<<str2;
*/
/*
int t;
cin>>t;
while(t--){                         
    string s;
    getline(cin,s);
    cout<<s<<endl;
} 

*/
/*int t;
cin>>t;
cin.ignore();
while(t--){                         
    string s;
    getline(cin,s);
    cout<<s<<endl;
} 
*/

//TO REVERSE THE STRING :::
/*
string str,str_rev;
cin>>str;
cout<<str<<endl;
for(int i=str.size();i>=0;i--){
str_rev=str_rev+str[i];
}
cout<<str_rev<<endl;*/
//demerits of this is 1.we are sdding character in the string 
//which is not good.
//2.other reason is time complexity.
//to avoid these.
string str,str_rev;
getline(cin,str);
cout<<str<<endl;
for(int i=str.size()-1;i>=0;i--){
str_rev.push_back(str[i]);
}
cout<<str_rev<<endl;
//TO CHECK PALINDROM
if(str==str_rev)
cout<<"it is palimdrome";
else
cout<<"it is not palindrome";



}