// EPISODE 22 :-- NESTING IN VECTORS..
#include<bits/stdc++.h>
using namespace std;
void printvec(vector<pair<int,int>>&v){
    cout<<"size " << v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<"  "<<v[i].second<<endl;
    }
}
void printvec2(vector<int>&v){
    cout<<"size "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    // in last video we discuss pairs in array now we are going to discuss pairs in vectors.
    /*
    vector<int>v(5);  // this will gives the output 0 0 0 0 0
    cout<<v.size()<<endl;
    cout<<sizeof(v)<<endl;     // this is giving output 12 . samjh nhi aaya kese.
    cout<<sizeof(v[0])<<endl;  // this is giving output 4 size of int.
    cout<<sizeof(v[1])<<endl;
    cout<<sizeof(v[2])<<endl;
    cout<<sizeof(v[3])<<endl;
    cout<<sizeof(v[4])<<endl;
    cout<<sizeof(v[5])<<endl;  // y bhi output dera hai 4.
    */
   /*
   vector<pair<int,int>>v={{1,2},{2,3},{4,5}};
   printvec(v);
   // output is:-
   //size 3
    //1  2
    //2  3
    //4  5
    //
   int n;
   cout<<"enter the size of vector\n";
   cin>>n;
   vector<pair<int,int>>v1;
   for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v1.push_back({x,y});  // v1.push_back(make_pair(x,y));
    }
    printvec(v1);
*/

// NOW MOVING TO DIFFERENCE BETWEEN ARRAY OF VECTOR AND VECTOR OF VECTOR.


// ARRAY OF VECTORS:--
/*
int N;
cin>>N;
vector<int>v[N];  // this signifies that we created N vectors
for(int i=0;i<N;i++){
    int n;
    cin>>n;
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        v[i].push_back(x);
    }
}
for(int i=0;i<N;i++){
    printvec2(v[i]);
}

//input:-
//3
//5
//1 2 3 4 5
//4
//1 2 3 4
//3
//9 8 7
//output:-
//size 5
//1  2  3  4  5
//size 4
//1  2  3  4  
//size 3
//9  8  7

cout<<"1st "<<v[0][1]<<endl; // from the 1st vector i.e,v[0] --v[0][1]--> represents the 2nd element 
                             // of that v[0] vector 
                             // that is 2.
// so this will act as a 2D array.
cout<<"2nd "<<v[0][6]<<endl;  // this will print 0 b/c size of v[0] is upto 5.
cout<<"3rd "<<v[2][0]<<endl;        // this will return 9.                          
cout<<"4th "<<v[5][0]<<endl;  // here o/p is 954405757 
*/


// VECTORS OF VECTOR:--
/*
int N;
cin>>N;
vector<vector<int>>v;
for(int i=0;i<N;i++){
    int n;
    cin>>n;
    vector<int>temp;    // we are creating this vector because initially there is no vector.
                        // so we cant use v[i].push_back.
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);
}   

for(int i=0;i<N;i++){
    printvec2(v[i]);
}
*/
//input:--
//3
//3
//1 2 3
//4 
//1 2 3 4 
//5
//9 8 7 6 5
//output:--
//size 3
//1  2  3
//size 4
//1  2  3  4
//size 5
//9  8  7  6  5
int N;
cin>>N;
vector<vector<int>>v;
for(int i=0;i<N;i++){
    int n;
    cin>>n;
    v.push_back(vector<int>()); // here we are creating an empty vector so that we can
                                // push_back() in it.
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        v[i].push_back(x);
    }
    
}   

for(int i=0;i<N;i++){
    printvec2(v[i]);
}
//input:--
//3
//3
//1 2 3
//4 
//1 2 3 4 
//5
//9 8 7 6 5
//output:--
//size 3
//1  2  3
//size 4
//1  2  3  4
//size 5
//9  8  7  6  5
}

//  NOTE:-- IN VECTOR OF VECTOR WE CAN EXPAND THE SIZE EASILY BY DOING PUSH_BACK().