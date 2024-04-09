//EPISODE 15: - Must Know Concept in Pre-Computation for every Competitive Programmer.
/*
Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value
to each the array element between two given indices, inclusive. Once all operations have been performed,
return the maximum value in the array.

Example


Queries are interpreted as follows:

    a b k
    1 5 3
    4 8 7
    6 9 1
Add the values of  between the indices  and  inclusive:

index->	 1 2 3  4  5 6 7 8 9 10
	[0,0,0, 0, 0,0,0,0,0, 0]
	[3,3,3, 3, 3,0,0,0,0, 0]
	[3,3,3,10,10,7,7,7,0, 0]
	[3,3,3,10,10,8,8,8,1, 0]
The largest value is  after all operations are performed.

Function Description

Complete the function arrayManipulation in the editor below.

arrayManipulation has the following parameters:

int n - the number of elements in the array
int queries[q][3] - a two dimensional array of queries where each queries[i] contains three integers, a, b, and k.
Returns

int - the maximum value in the resultant array
Input Format

The first line contains two space-separated integers  and , the size of the array and the number of operations.
Each of the next  lines contains three space-separated integers ,  and , the left index, right index and summand.

Constraints

Sample Input

5 3
1 2 100
2 5 100
3 4 100
Sample Output

200
Explanation

After the first update the list is 100 100 0 0 0.
After the second update list is 100 200 100 100 100.
After the third update list is 100 200 200 200 100.

The maximum value is .
*/
/*
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int ar[N];
int main()
{
    int n,m;
    cout<<"enter the size of array\n";
    cin>>n;
    cout<<"enter the no.of test cases\n";
    cin>>m;
    while(m--){
        int a,b,d;
        cout<<"enter the no a and b the limit of array u want to increase\n";
        cin>>a>>b;
        cout<<"enter the value from which want to increase\n";
        cin>>d;
        for(int i=a;i<=b;i++){
             ar[i]=ar[i]+d;
        }
        }
        long long mx=-1;
        for(int i=1;i<=n;i++){
            if(ar[i]>mx)
            mx=ar[i];
        }
        cout<<mx<<endl;
}*/
//BUT THESE SOLUTION IS AFFECTED BY TIME COMPLEXITY O(m * n + n) = 2*10^5 + 10^7 .


// BY PREFIX SUM..


#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int ar[N];
int main()
{
    int n,m;
    cout<<"enter the size of array\n";
    cin>>n;
    cout<<"enter the no.of test cases\n";
    cin>>m;
    while(m--){
        int a,b,d;
        cout<<"enter the no a and b the limit of array u want to increase\n";
        cin>>a>>b;
        cout<<"enter the value from which want to increase\n";
        cin>>d;
        ar[a]=ar[a]+d;
        ar[b+1]=ar[b+1]-d;}

        for(int i=1;i<=n;i++)
        ar[i]=ar[i-1]+ar[i];
        long long mx=-1;
        for(int i=1;i<=n;i++){
            if(mx<ar[i]){
                mx=ar[i];
            }
        }
        for (int i=1;i<=n;i++){cout<<ar[i]<<endl;}  
        cout<<"max value in the array is "<<mx<<endl;

      //  O(m+n)=2*10^5 + 10^7 = 10^7;

}


