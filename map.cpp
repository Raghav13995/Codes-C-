// NORMAL MAPS:-- 

// THEY STORE THE VALUE IN A SORTED ARRAY:--

// --THEY ARE IMPLEMENTED BY RED BLACK TREE.

// --RED BLACK TREE IS A SELF BALANCED TREE AND INTERNAL
// IMPLEMENTATION OF MAP IS DONE THROUGH IT.

// --MAP ARE CONTAGIOUS IN MEMORY


// UNOREDERED MAPS:-- 

//-- THEY STORE THE VALUE RANDOMLY.

#include<bits/stdc++.h>
using namespace std;
void printmap(map<int,string>&m){
    cout<<"Size of map --> "<<m.size()<<endl;
    for(auto &it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
}

void print(map<int,string>&m){
    cout<<"Size of map --> "<<m.size()<<endl;
    for(auto it =m.begin();it != m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;
}

void printing(map<int,string>&m){
    cout<<"Size of map --> "<<m.size()<<endl;
    map<int,string> :: iterator it=m.begin();
    while(it!=m.end()){
        cout<<(*it).first<<" "<<(*it).second<<endl;
        it++;
    }
    cout<<endl;
}
int main()
{
    map<int,string>m;
    m[1]="raghav";
    m[5]; // while it will take O(log n) complexity and 
    //      takes empty string.
    m[8]="R&P";
    m[3]="agrawal";

    printmap(m);

    print(m);

    printing(m);
        // find() will used to find data in maps.
        // return type of find is iterator.
        // we will pass the key in find.
        auto it=m.find(1);  // if no such value exist in map then 
                            // it will return m.empty(). 
        cout<<"lets see --- "<<(*it).first<<" "<<(*it).second<<endl;

        auto x=m.find(9); // this is not in map.
        if(x==m.end()){
            cout<<"no value in map\n";
        }
        else{
            cout<<(*x).first<<" "<<(*x).second<<endl;
        }


        // erase():--
        // we can pass iterator as well key in erase function:--
        // this is used to delete value from the map.
        

        m.erase(5);
        printmap(m);

        auto y=m.find(3);

        if(y!=m.end())
        m.erase(y);

        printmap(m);


        // NOTE--> if key does not exist in map then m.find return m.end()
        //         value and if we pass it to erase then it will give
        //         segmentation fault.



        // clear()--
          // this will clear the map:-

          m.clear();
          printmap(m);


}