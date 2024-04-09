#include<bits/stdc++.h>
using namespace std;
int main()
{   /*
    // * --> this indicates value at.
    // & --> this indicates address of.
    int arr[10]={23,122,41,67};
    cout<<"1st "<<arr<<endl;        // 0x61fed4  this will give the address of 1st element. 
    cout<<"2nd "<<arr[0]<<endl;     // 23 this will give the value at a[0]. 
    cout<<"3rd "<<&arr[0]<<endl;    // 0x61fed4 this will gives the address of a[0].
    cout<<"4th "<<*arr<<endl;       // 23 this will gives the value of a[0].
    cout<<"5th "<<*arr+1<<endl;     // 24 this will give value a[0]+1.
    cout<<"6th "<<*(arr+1)<<endl;   // 122 this will gives the value of a[1].
    cout<<"7th "<<*(arr)+1<<endl;   // 24 this will gives the value a[0]+1
    cout<<"8th "<<arr[2]<<endl;     // 41 this will gives value of a[2].
    cout<<"9th "<<*(arr+2)<<endl;   // 41 this will gives the value of a[2].
                                    // *(arr+2)-->that address of arr 1st element is 700
                                    // then *(arr+2) will gives *(700+8)= *(708) = gives 
                                    // the value at address 708 . Means a[2].
    int i=3;
    cout<<"10th "<<i[arr]<<endl;             // 67 this gives the value of arr[3].

    // arr[i] = *(arr+i)
            //or
    // i[arr] = *(i+arr)  these will not give error and this is same as the above statement.    
*/
/* 
int temp[10]={1,2};
cout<<"1st "<<sizeof(temp)<<endl;   // these gives the total value of array i.e, 40
cout<<"2nd "<<sizeof(*temp)<<endl;  // this gives the size of temp[0] i.e, int so 4.
cout<<"3rd "<<sizeof(&temp)<<endl;  // this gives the value 8 size of address.
int *ptr=&temp[0];
cout<<"4th "<<sizeof(ptr)<<endl;    // this return value 8 that size of array
cout<<"5th "<<sizeof(*ptr)<<endl;   // this return value 4 size of a[0] i.e,int
cout<<"6th "<<sizeof(&ptr)<<endl;   // this return the size of address of ptr i.e,8
*/
/*
int a[20]={1,2,3,5};
cout<<"-->"<<&a[0]<<endl;
cout<<&a<<endl;
cout<<a<<endl;
// these all three are same 
*/


/*
int *p=&a[0];
cout<<p<<endl;
cout<<*p<<endl;
cout<<"-->"<<&p<<endl;
//output:-
//0x61fec0
//1
//-->0x61febc
*/
/*
int arr[10];
cout<<arr<<endl;
// arr=arr+1; this will show error b\c this is not possible ,mapping cant be changedin symbl table.

int *ptr=&arr[0];
cout<<ptr<<endl;
ptr=ptr+1;  // this will work.
cout<<ptr<<endl;
*/
/*
char ch[6]="abcde";
cout<<ch[0]<<endl;
cout<<ch[1]<<endl;
cout<<ch[2]<<endl;
cout<<ch[3]<<endl;
cout<<ch[4]<<endl;
cout<<ch[5]<<endl;// this will return the null value means empty space.
// and from here garbage symbols are given randomly.
cout<<ch[6]<<endl;
cout<<ch[7]<<endl;
cout<<ch[8]<<endl;
cout<<ch[9]<<endl;
*/
/*
// IN THE CASE OF CHAR ARRAY IMPLEMENTATION OF COUT IS DIFFERENT THAN THAT OF CHARACTER ARRAY.
cout<<"for int array\n";
int arr[10]={1,2,3,4,5};
cout<<arr<<endl; // this will return the address of 1st element.
int *ptr=&arr[0];
cout<<ptr<<endl;  // this will return the address of 1st element of array.

cout<<"for char array\n";
char ch[6]="abcde";
cout<<ch<<endl;  // expecting the address of 1st element but
//                this will return the whole ch array i.e, "abcde".
char *ptr2=&ch[0];
cout<<ptr2<<endl;// in this also expected is address of ch[0], but o\p is "abcde"
                 // and it will stop printing string after getting null vector.
cout<<*ptr2<<endl;  // this will give the value of ch[0] only;                 
*/
// NOW IF WE CANT FIND NULL VECTOR THEN ::-->
/*
char t='p';
char *ptr=&t;
cout<<ptr<<endl; 
// o\p is  
//p
// a
//so this extra a is coming b/c cout will stop printing the value when it get null character.
cout<<*ptr<<endl;
*/  





 }