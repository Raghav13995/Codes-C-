/*
#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v){
    cout<<"size of vector : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        // v.size --> O[1].
        cout<<v[i]<<endl;
    }
}
int main()
{
    // vector is just like array.In array while we define the size of 
    // array memory is allocated to it.
    // but while defining the vectors the size of vectors is 0.
    // vectors are having dynamic memory.
    // it increses there size as the number is assign to it.

    vector<int>v;  //currently the size of vector is 0.
    int n;
    cout<<"enter the number of number u want in vectors\n";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        
        v.push_back(x);
    }
    printvec(v);
  

}*/



#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v){
    cout<<"size of vector : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        // v.size --> O[1].
        cout<<v[i]<<endl;
    }
}
int main()
{/*
    vector<int>v(5);  // we can also declare the size of vector and by declaring automatically it 
                      // will take value 0.
                      // we can also extend the vector after declaring the size.
    printvec(v);   // this will gives the output 0 0 0 0 0
    cout<<v.size()<<endl;

    // now if we want to increase the vector we can add it .

    v.push_back(7);
    printvec(v);
    cout<<v.size()<<endl;
 */

  // now if we are doing these.
 /*
  vector<int>v(5,3);// by doing this,the 1st 5 number of vector will be 3.
  v.push_back(7);
  printvec(v);
 */
  // push_back() function is used to add a number in last..
  // similarly pop_back() function is used to remove last number
/*
vector<int>v;
v.push_back(6);
v.push_back(7);
printvec(v); // here output is 6 7 .
cout<<"now using pop_back function \n";
v.pop_back();
printvec(v);// this will remove 7 from the end of the vector.

*/

// now we can copy the vector easily in another vector which is not possible in array.


/*
vector<int>v;
v.push_back(6);
v.push_back(7);

vector<int>v1=v; // v1 is the copy of v.If we made any change in v1 it will not change in v.
                 // and its complexity is O(n).

v1.push_back(8);
// now on making change in v1 we are observing v;
printvec(v);  // so there will we no chnge in v , o/p is 6 7 only
printvec(v1); // there will be change in v1 ,o/p is 6 7 8 .
*/


// PASSING OF VECTOR WITHOUT REFERENCE.

vector<int>v;
v.push_back(6);
v.push_back(7);
vector<int>v1=v;
v1.push_back(8);
printvec(v);// so there will be no change in v.B\c vector v1is copy of v.
printvec(v1);

// NOW IF -

vector<int>&v2=v;
v2.push_back(8);
printvec(v);  // so there will be change in v. B\c vector v2 is actual vector v.
              // passed by reference.
printvec(v2);







}
