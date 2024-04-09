#include<bits/stdc++.h>
using namespace std;
int main()
{
    // TO CREATE 2D DYNAMIC 2D ARRAY.
    cout<<"enter number of rows\n";
    int n;
    cin>>n;
    cout<<"enter number of column\n";
    int m;
    cin>>m;
    int **arr=new int*[n];    // this will create array of n pointer in the array.
    cout<<"enter the elements of array\n";
    for(int i=0;i<n;i++){
        arr[i]=new int[m];    // and by this we are inserting the address each row of
                              // n size in each pointer  
    }

    // taking inputs.
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    // taking output.
    cout<<"output:--\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // releasing memory:-- 
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;
    cout<<"deletion completed\n";
}