#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={54,87,47,56,32,98,25};
    for(int i=0;i<6;i++){
        int midIndex=i;
        for(int j=i+1;j<7;j++){
            if(arr[i>arr[j]])
            midIndex=j;
        }
        swap(arr[midIndex],arr[i]);
    }
}
//  we will use selection sort when the size of array is small .
// THE TIME COMPLEXITY OF SELECTION SORT IS O[N^2]. --> IN BOTH WORST AND GOOD CASE.
// IT IS NOT SATBLE DATA BASE.

// Complexity Analysis of Selection Sort
// Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:
// 
// One loop to select an element of Array one by one = O(N)
// Another loop to compare that element with every other Array element = O(N)
// Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2).


