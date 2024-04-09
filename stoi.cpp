#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        // for(int i=0;i<words.size();i++){
        //     bool check=false;
        //     int size=words[i].size();
        //     for(int j=0;j<words.size();j++){
        //         if(j==i)
        //         continue;
        //         for(int k=0;k<words[j].size();k++){
        //             string s=words[j].substr(k,size);
        //             if(s==words[i]){
        //             ans.push_back(s);
        //             check=true;
        //             break;
        //             }
        //         }
        //         if(check==true)
        //         break;
        //     }
        // }
        // return ans;



        cout<<"hi\n";
        for(int i=0;i<words.size();i++){
            bool check=false;
            cout<<words[i]<<endl;
            for(int j=0;i<words.size();j++){
                if(i!=j && (words[j].find(words[i])!= string::npos))
                {   
                    ans.push_back(words[i]);
                    break;
                }
            }
            
        }
        return ans;
    }
};


















// #include<vector>
// #include<set>
// class Solution {
// public:
//     vector<string> stringMatching(vector<string>& words) 
//     {
//         vector<string> ans;
//         for(int i=0;i<words.size();++i)
//         {
//             for(int j=0;j<words.size();++j)
//             {
//                 if(i !=j && (words[i].find(words[j]) != string::npos))
//                 {
//                     ans.push_back(words[j]);
//                 }
//             }
//         }  

//         set<string> s;
//         for(int i=0;i<ans.size();++i) 
//         {
//             s.insert(ans[i]);
//         }

//         ans.clear();

//         for(auto itr:s)
//         {
//             ans.push_back(itr);
//         }

//         return ans;
//     }
// };
int main()
{
    vector<string>s2;
    s2.push_back("mass");
    s2.push_back("as");
    s2.push_back("hero");
    s2.push_back("superhero");
    vector<string>ans;
    Solution s;
    ans=s.stringMatching(s2);
    for(auto it:ans){
        cout<<it<<" ";
    }


}
