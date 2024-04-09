#include<bits/stdc++.h>
using namespace std;
/*void printhello(){
    cout<<"hello world"<<endl;

}*/

/*int sum(int a,int b){
    return a+b;
}*/
/*int digit_sum(int a){
       int digit_sum=0;
           while(a){
        digit_sum=digit_sum+a%10;
       a=a/10;
    }
    cout<<"sum of digit is ";
    return digit_sum;
    }*/
/*void increament(int a){
    a++;
}
void increament1(int &a){
    a++;
}*/
/*void swap(int &a,int &b){
    int t;
    t=a;
    a=b;
    b=t;

}*/

/*void funct(string &s){
    s="agrawal";
}*/
/*void arr(int a[]){
a[7]=5;
}*/

void arr1(int a1[][20]){
    a1[0][0]=8;
}
int main()
{
    //  Functions, C++ references and CONTEST ALERT Information:::
  
 //printhello(); 
 //cout<<sum(1,4);


 //TO CALCULAT THE DIGIT SUM OF NUMBER:
/*cout<<"how many numbers are there ";
 int x,a;
 cin>>x;
 while(x--){
    cin>>a;
    cout<<digit_sum(a)<<endl;
 }*/

//CALL BY REFERENCE /CALL BY VALUE:::
/*int a;
cin>>a;
increament(a);
cout<<a<<endl;
//here value of a is not changed because in function copy of a is passed.
//so we have to pass by refrence;
increament1(a);
cout<<a<<endl;
// in call by refrence address of variable is passes.*/


// TO SWAP THE VALUE OF TWO VARIABLE.

/*int a=4,b=6;
cout<<"value of a "<<a<<endl<<"value of b "<<b<<endl;
swap(a,b);
cout<<"value of a "<<a<<endl<<"value of b "<<b<<endl;

//BUT SWAP FUNCTION IS INBUILT FUNCTION IN C++
  
swap(a,b);
cout<<"value of a "<<a<<endl<<"value of b "<<b<<endl;

// some inbuilt function of c++
cout<<max(a,b)<<endl;
cout<<min(a,b);*/

/*string s="raghav";
cout<<(s)<<endl;
funct(s);
cout<<(s)<<endl;*/
//cout<<sizeof(int)<<endl;
//cout<<sizeof(char)<<endl;
//cout<<sizeof(int)<<endl;


/*int a[10];
a[7]=7;
cout<<a[7];
arr(a);
cout<<a[7];*/
// SO IT IS CLEAR THAT ARRAYS ARE ALWAYS PASSED BY REFERENCE WHELTHER 
// & IS USED OR NOT.
// AND IN DEFINING THE FUNTION IT IS NOT NECESSARY THAT THE SIZE OF 1D ARRAY IS DECLARED.

// IN THE CASE OF 2D ARRAYS WE CAN LEAVE THE 1ST BOX,BUT 2ND BOX HAS TO BE DECLARED BY SIZE.
//void arr1(int a1[][]){
//    a1[0][0]=8;
//} in this case error occur in the code
// so we have to declare like
//  void arr1(int a1[][20]){   }


 int a1[10][20];
 a1[0][0]=5;
 cout<<a1[0][0]<<endl;
 arr1(a1);
 cout<<a1[0][0]<<endl;



}