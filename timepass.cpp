#include<bits/stdc++.h>
using namespace std;
class hero{
    // properties
    private:
    int health;
    public:
    char level;
    
    // constructor made by us,as the same name as of class
    hero(){
        cout<<"constructor is called"<<endl;
    }
    // paramerterised Constructor:-
    hero(int health){
        this->health=health;   //this is required b/c there is two health 
                                // (this) will point to the address of ramesh.
                               // so basically this is pointer. 
                               //  (this) stores the current object address
        cout<<"this --> "<<this<<endl;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch){
        level=ch;
    }
};
int main()
{   // object created statically.
    hero ramesh;
    cout<<"address of ramesh "<<&ramesh<<endl;
    hero aakash(10);
    
    cout<<"address of aakash "<<&aakash<<endl;
    // this will show that (this) is a pointer and stores the address of object
    cout<<aakash.gethealth(); // this will return 10 .
    //NOTE:-- JESE HI HUMNE NE APNA KHUD KA CONSTRUCTOR BANAYA VESE HI DEFAULT WALA
    //        CONSTRUCTOR JO HOTA HAI USKI MRITYU HO JATI HAI.  
   
}