#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(string s) {
        int maxsum=0;
        int pointer1=0;
        int j=1;
        int pointer2=s.length()-1;
        for(int i=1;i<=s.length()-1;i++){
            int zero=0;
            int one=0;
            zero=count(s.begin(),s.begin()+i,'0');
            one=count(s.begin()+i,s.end(),'1');
            int sum=zero+one;
            if(sum>maxsum){
                maxsum=sum;
            }
            
        }
        return maxsum;


    }
};
int main(){
    string s="00";
    Solution *sx=new Solution;
    cout<<sx->maxScore(s);

}