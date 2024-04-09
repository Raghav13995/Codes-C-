#include<bits/stdc++.h>
using namespace std;
inline int getmax(int &a,int &b){
    return(a>b)? a:b;
}
int main()
{
    // C++ provides inline functions to reduce the function call overhead. An inline function
    // is a function that is expanded in line when it is called. When the inline function is
    // called whole code of the inline function gets inserted or substituted at the point 
    // of the inline function call. This substitution is performed by the C++ compiler at 
    // compile time. An inline function may increase efficiency if it is small.

    // according to love babbar inline function jab kam karega jab function 1 line ka hi ho.
    // agar function 2 ya 3 line ka hua toh shyd hi hoga inline.
    // agar 3 se jyada hua toh inline nhi hoga.
    int a=1,b=2;
    int ans=0;
    ans=getmax(a,b);
    cout<<ans<<endl;
    a=a+3;
    b=b+1;
    ans=getmax(a,b);
    cout<<ans<<endl;

    // inline funtion ky krta hai :-- inline function compile krne se pehle getmax(a,b) ki jagah
    //                                (a>b)? a:b se replace kr dega. toh woh function call memory 
    //                                bhi nhi lega
    // Remember, inlining is only a request to the compiler, not a command. The compiler can 
    // ignore the request for inlining.
    /*
    The compiler may not perform inlining in such circumstances as: 

    1). If a function contains a loop. (for, while and do-while) 
    2). If a function contains static variables. 
    3). If a function is recursive. 
    4). If a function return type is other than void, and the return statement doesn’t exist in a function body. 
    5). If a function contains a switch or goto statement.
    */ 
}
