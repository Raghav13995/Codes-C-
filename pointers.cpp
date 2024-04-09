#include<bits/stdc++.h>
using namespace std;
int main()
{   /*
    // let suppose we are declaring a variable;
    int a=5;
    char b='a';
    double d=4.55;
    // so the memory is not allocated by the name,memory it is allocated by the address.
    // so when we do
    cout<<a<<endl;
    // it will return 5 .but how?
    // so when we assign variable a =5 then a is mapped with the memory with some address .

    // SYMBOL MEMORY:- symbol table is an imp data structure created and maintained by the compiler
    // in order to keep track of semantics of variable i.e,it stores information about the scope 
    //and binding information
    // about names, information about instances of various entities such as variable and function
    // names,classes.objects,etc
    
    // and the address of num is given by..
    cout<<&a<<endl; // it will in the hexa decimal form.


    // POINTER --> pointer is used to store the address..
    // for pointing towards int variable .
    int *ptr =&a;
    // for pointing towards the char variable.
    char *ptr1=&b;
    double *ptr2=&d;

    // *p --> this signifies that, give the value stored in address that is stored in p.
    //        value at address pointed by p.


    */
   /*
    int p=15;
    int q=10;
    int *a;
    int *b;
    a=&p;
    b=&q;
    cout<<p<<endl; // this will give the value of p
    cout<<q<<endl; // this will give the value of q
    cout<<*a<<endl;// this will give the value at address pointed by a.
    cout<<*b<<endl;// this will give the value at address pointed by b.
    cout<<a<<endl; // this will give the address stored in pinter a.
    cout<<b<<endl; // this will give the address stored in pinter b.
    cout<<&p<<endl;// this will give the address of p.
    cout<<&q<<endl;// this will give the address of q.
    cout<<&a<<endl;// this will give the address of pointer a.
    cout<<&b<<endl;// this will give the address of pointer b.

// NOW DICUSSING ABOUT THE SIZE OF THE POINTERS.
cout<<sizeof(a)<<endl; // size of pointer in all case- int,char,double will be same.
                       // because they are used to store address.
cout<<sizeof(int);
*/

/*
int *ptr;  //pointer to int is created and pointing to some garbage value. 
cout<<ptr<<endl;
int *ptr2=0;
cout<<*ptr2<<endl;// this will give the segmentation error but not 
                  // giving anything in vscode. 
*/
/*
int i=5;
int *ptr;
ptr=&i;
// instead of doing prefer like below.
int x=5;
int *ptr1=0;  // by doing this pointer does not store garbage address.
ptr1=&i;
  */
/*
 int num=5;
 int a=num;
 a++;
 cout<<num<<endl; // so the value of num will remain 5 only  
*/
/*
int num=5;
int*ptr=&num;
int a=*ptr;
a++;
cout<<num<<endl;  // now here also value of num remain same.
*/
/*
int num=5;
int *ptr=&num;
cout<<"before "<<num<<endl;
(*ptr)++;
cout<<"after "<<num<<endl;
// this will increase the value of num.
int *q=ptr;
cout<<ptr<<"  "<<q<<endl;
cout<<*ptr<<"  "<<*q<<endl;
cout<<&ptr<<"  "<<&q<<endl;
*/
/*
int i=3;
 int *t=&i;
 cout<<*t++<<endl;
 cout<<*t<<endl; // this is not giving o/p as 4.So brakets are compulsory.
                 // random value is given , i think it increase the value of address.
*/
int i=3;
int *t=&i;
*t=*t+1; // this increase the value 
cout<<*t<<endl;
cout<<t<<endl;  // o\p is 0x61ff08
t=t+1;
cout<<t<<endl;  // 0x61ff0c   so the value of address increased bby 4 byte
// it t=t+1;
// then in that case it will increase the number , that signifies that,let suppose the 
// address stroed in t is 100, so by t=t+1 the address stored in t becomes 104 .B/c the
// size of integer is of 4 byte.


}