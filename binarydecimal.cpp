// this is binary to decimal conversion.
/*
#include<bits/stdc++.h>
using namespace std;
int convert(int n){
    int sum=0;
    for(int i=0;n!=0;i++){
    sum+=n%10*pow(2,i);
    n=n/10;

    }
    return sum;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<convert(n)<<endl;
}
*/


// decimal to binary conversion.
#include<bits/stdc++.h>
using namespace std;
int convert(int n){
    int binary;
    for(int i=0;n!=0;i++){
        binary=n%2;
        n=n/2;
        
    }
}
int main()
{
    int n;
    cin>>n;

}