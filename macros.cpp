// LECTURE 30: MACROS, GLOBAL VARIABLE, INLINE FUNCTION & DEFAULT ARGS:--
// This # is a pre processor use to include or use the statement before compilation.
#include<bits/stdc++.h>
using namespace std;

// object like macro
#define PI 3.14
#define AREA(l,b) l*b

// chain macro
#define Instagram Follower
#define Follower 138

// multi line macros:--
#define rtg '4',\
            84,\
            90

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))  

int main()
{
    // MACROS:--A PIECE OF CODE IN A PROGRAM THAT IS REPLACED BY VALUE OF MACRO.
    // TYPES OF MACROS:--
    //    1).OBJECT LIKE MACROS.
    //    2).CHAIN MACROS.
    //    3).MULTI LINE MACROS.
    //    4).FUNCTION LIKE MACROS.

    int i =5;
    double area = PI*i*i;
    cout<<"area is "<<area<<endl;

    // the value of macro will not change 
    // we cant do  PI++ and all the changing operations.
    // the macro does not takes any memory space.
    // Macro definitions need not be terminated by a semi-colon(;).
    // it replace all the value in the program before compilation.

    int area2=AREA(10,10);
    cout<<"area of rectangle is "<<area2<<endl;

    // Explanation: 
    // From the above program, we can see that whenever the compiler finds AREA(l, b)
    //  in the program it replaces it with the macros definition i.e., (l*b). The values
    //  passed to the macro template AREA(l, b) will also be replaced by the statement 
    //  (l*b). Therefore, AREA(10, 5) will be equal to 10*5.

    cout<<"rtg have "<<Instagram<<"k followers on Instagram\n"; 
    cout<<"rtg have "<<Follower<<"k followers on Instagram\n"; 

    // Explanation: 
    // INSTAGRAM is expanded first to produce FOLLOWERS. Then the expanded macro is expanded
    // to produce the outcome as 138K. This is called the chaining of macros.

    

    // Array arr[] with elements
    // defined in macros
    char arr[]={ rtg };
    cout<<"elements of array\n";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }

    // Given two number a and b
    int a = 18;
    int b = 76;
 
    cout << "Minimum value between "
         << a << " and " << b
         << " is: " << min(a, b);
}