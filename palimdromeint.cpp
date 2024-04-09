#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long long int x2=0;
        int i=0;
        while(x){
            cout<<"ihisd--- "<<((x%10)*pow(10,i))<<endl;
            x2=x2+(x%10)*pow(10,i);
            cout<<"x2-"<<x2<<endl;
            i++;
            x=x/10;
        }
        cout<<"int- "<<x2;
        if(x==x2) return true;
        return false;
    }
};
int main()
{
    // Solution s;
    // s.isPalindrome(121);
    vector<int>v={1,2,3,4};
    int data;


}