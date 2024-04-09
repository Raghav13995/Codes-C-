#include<bits/stdc++.h>
using namespace std;
class MyHashMap {
public:
        vector<pair<int,int>>map;    

    void put(int key, int value) {

        bool inserted=false;
        for(int i=0;i<map.size();i++){
            if(key==map[i].first){
                map[i].second=value;
                inserted=true;
                break;
            }
        }
        if(inserted==false){
            map.push_back({key,value});
        }
        
    }
    
    int get(int key) {
        bool get=false;
        for(int i=0;i<map.size();i++){
            if(map[i].first==key){
                get=true;
                return map[i].second;
            }
        }
        if(get==false)
        return -1;
    }
    
    void remove(int key) {
        vector<pair<int,int>>map2;
        for(int i=0;i<map.size();i++){
            if(map[i].first!=key){
                map2.push_back({map[i].first,map[i].second});
            }
        }
        map=map2;
    }
};

int main()
{
    MyHashMap *obj=new MyHashMap();
    obj->put(1,2);
    obj->put(2,7);
    obj->put(3,9);
    cout<<obj->get(2)<<endl;
    cout<<obj->get(1)<<endl;
    cout<<obj->get(3)<<endl;
    cout<<obj->get(5)<<endl;

    obj->remove(2);
    cout<<"after remove\n";
    cout<<obj->get(2)<<endl;
    cout<<obj->get(1)<<endl;
    cout<<obj->get(3)<<endl;
}

// NAME OF QUESTION IS :--- DESIGN HASH MAP.
// solution on leet code
// class MyHashMap {
// private:
//     vector<int>array;
// public:
//     MyHashMap() {
//         array = vector<int>(1000001, -1);
//     }
    
//     void put(int key, int value) {
//         this->array[key] = value;
//     }
    
//     int get(int key) {
//         return this->array[key];
//     }
    
//     void remove(int key) {
//         this->array[key] = -1;
//     }
// };