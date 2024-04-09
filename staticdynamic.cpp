#include<bits/stdc++.h>
using namespace std;
// this is very bad practice.B/c the scope of variable is upto the function only.
int& reference(int a){
    int num=a;
    int & ans=num;
    return ans;
}
// this is very bad practice.B/c the scope of variable is upto the function only.
int* pointer(int a){
    int *ptr=&a;
    return ptr;
}
void update(int i){
    i++;
}
void update2(int &i){
    i++;
}
int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    // REFERENCE VARIABLE:-- Same memory different name.It is like a boly has two name.  
    //  there isno new memory is created in pass by reference, while there is new memory 
    // created in pass by value, in  which copy is passed.

    int i=5;

    // creating a reference variable -
    /*
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    cout<<i<<endl;
    */
   // output :-- 5 6 7 7 

   cout<<"the value before is "<<i<<endl;
   update(i);
   cout<<"the value after is "<<i<<endl;
   cout<<"the value before is "<<i<<endl;
   update2(i);
   cout<<"the value after is "<<i<<endl;

   // NOTE:-- WE CANNOT USE REFERENCE VARIABLE AS THE RETURN TYPE OF ANY FUNCTION.
   cout<< reference(8)<<endl;
   cout<< pointer(8)<<endl;


   // as we know that the we cant give the size of array dynamically.
   // and static allocation is always in stack memory while dynamic allocation is
   // always in the heap.

   // now to give the size of array dynamically.
   // so we have to use heap memory , to use heap memory we will use new keyword.

   // char *ch=new char;

   // the significance of this new keyword is that, the memory is allocated to the char in heap,
   // but in heap we can't give name to heap memory like in static memory int i --> means we named the
   // memory as i , but this is not possible in heap ,so what we will do is --> we will create a 
   // pointer in the stack ,which will store the address of the memory of char which is created in 
   // the heap.
   // so there will requirment of memory for the pointer we create to store the address.
   // In 64 bit system --> pointer takes 8 BYTE.
   // In 32 bit system --> pointer takes 4 BYTE.
   // So total memory allocated for the dynamic char variable is --> memory for pointer in static
                                                              //    + memory for variable in dynamic   



   // NOW TO CREATE THE DYNAMIC ARRAY.
    int n;
    cin>>n;
    
    // variable size array 
    int* arr=new int[n];

    // taking input in array 
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }    
    int ans = getsum(arr,n);   
    cout<<"answer is "<< ans<<endl;

    // arr[i] --> *(arr+i)    

    // now what is mechanism behind it is :--
    // first we are creating the int n in the static memory
    // then using new keyword we are creating array in the heap whose size is given at the run time.
    // and in the arr pointer we are storing the base address of the array in the heap.

    // if the n=5;
    //then size of heap used = 5*4=20.
    // and it will store in pointer of static memory whose size is 8 BYTE 
    // so total size required = 28.


    // CASE 1:---
    while(true){
        int i=5;
    }

    // CASE 2 :---
    while(true){
        int *ptr=new int ;
    }

    // so what is happening in the case 1 
       //memory allocated to int and get free after 1 run of loop.B/c scope of static memory in loop is 
       //upto the loop only, so only 4 byte is used of the statck memory.

    // But in 2nd case:--
       //memory allocated to the pointer and it will store the address of the memory of heap.
       //but after 1 loop runned stack memory get freed but the heap memory does not get freed .
       //so it is very dangerous case.     

    // we have to delete mamnually in the case of dynamically memory

    //  for single element deletion.
     int *ptr1=new int;
     delete ptr1;

    // for array deletion.
     int *arr2=new int[50];
     delete []arr;

    //    NOTE:-- THE SIZE OF HEAP MEMORY IS GREATER THAN THE SIZE OF DYNAMIC MEMORY.

}