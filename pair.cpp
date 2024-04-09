//EPISODE: 21 --> PAIRS AND VECTORS.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //THERE ARE TWO WAYS TO DECLARE PAIRS.
    
    pair<int,string>p;
    /*
    // 1st way.
    p= make_pair(2,"abcd");
    cout<<p.first<<" "<<p.second<<" ";
    */
    // p.first will give 1st element of pair & p.second will give 
    // second element of pair.
    // cout<<p; THESE STATEMENT IS SENSE LESS


    // 2ND WAY.
    /*
    p={1,"abcde"};
    cout<<p.first<<" "<<p.second<<" ";
   */
   /*
  p= make_pair(2,"abcd");
  pair<int,string>p1=p;
  cout<<p1.first<<" "<<p1.second<<" "<<endl;
  p1.first=4;
  cout<<p.first<<" "<<p.second<<" "<<endl;// here output is 2 abcd not 4 abcd
    //                                    b\c it is not passed by reference.
  pair<int,string>&p2=p;
  p2.first=6;
  cout<<p.first<<" "<<p.second<<" "<<endl;// here output is 6 abcd it is changed 
                                          //because it is passe by reference.

 */
/*
int arr1[3]={1,3,5};
int arr2[3]={2,4,6};
pair<int,int>arr[3];
arr[0]={arr1[0],arr2[0]};
arr[1]={arr1[1],arr2[1]};
arr[2]={arr1[2],arr2[2]};
for(int i=0;i<3;i++){
  cout<<arr[i].first<<" "<<arr[i].second<<endl;
}
*/

// NOW IF WE SWAP THE PAIR ELEMENT. 
/*
  int arr1[3]={1,3,5};
int arr2[3]={2,4,6};
pair<int,int>arr[3];
arr[0]={arr1[0],arr2[0]};
arr[1]={arr1[1],arr2[1]};
arr[2]={arr1[2],arr2[2]};
swap(arr[0],arr[2]);  // it will swap both the elements of array
for(int i=0;i<3;i++){
  cout<<arr[i].first<<" "<<arr[i].second<<endl;
}
*/
/*
cin>>p.first;
cout<<p.first;
*/

}
