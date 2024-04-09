#include<bits/stdc++.h>
using namespace std;
class hero{
    public:
    int health;
};
class see{

};
int main()
{
    hero h1;
    see s1;
    cout<<"size of: "<<sizeof(h1)<<endl;// this will return 4 because size of int is 4
    cout<<"size of: "<<sizeof(s1)<<endl;
    cout<<"health is : "<<h1.health<<endl;
}