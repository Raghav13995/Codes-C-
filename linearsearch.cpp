#include<bits/stdc++.h>
using namespace std;
int main()
{   cout<<"Raghav Agrawal\n";
    cout<<"0801IT221104\n";
    int *a;
    a=(int *)malloc(7*sizeof(int));
    cout<<"enter elements\n";
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    cout<<"enter the you want to search\n";
    int x;
    cin>>x;
    int b=0;
    for(int i=0;i<10;i++){
        if (a[i]==x){
        cout<<"the element is present at index "<<i<<endl;
        b++;
        break;
        }
    }
    if(b==0)
    cout<<"no such number is present in the array";
}