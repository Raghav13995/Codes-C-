#include<bits/stdc++.h>
using namespace std;
int main()
{   // Iterators are like pointers which are used to point
    // the elements of containers in STL like vectors,map,pairs 
    // etc.
    
    vector<int>v={2,3,4,5,6};
    // vectors are also continuous in the memory 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // NOW TO DECLARE ITERATOR:--
    // we should declare the type of container which iterator is pointing.

    vector<int>::iterator it = v.begin();
    cout<<"1st "<<(*it)<<endl; // this show the 1st element
    cout<<"2nd "<<(*it+9)<<endl; // this show 1st element + 9 
    cout<<"3rd "<<(*(it+1))<<endl; // this show 2nd element.

    // like vector are continuous but other container are not
    // continuous but iterator can also used to point there elements

      for(it=v.begin();it!=v.end();++it){
        // there is difference between ++it & it+1
        cout<<(*it)<<"  ";
      }
      cout<<endl;
      cout<<"7th "<<(*it)<<endl;
      cout<<"8th "<<(*(it-1))<<endl;

      cout<<"now in case of vectors + pairs\n";
      vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
      vector<pair<int,int>> :: iterator it2;
      for(it2=v_p.begin();it2!=v_p.end();++it2){
        cout<<(*it2).first<<" "<<(*it2).second<<endl;
      }

      cout<<"((*it).first <=> (it->first))"<<endl;
      // ::::   (*it).first <=> (it->first)   ::::

      for(it2=v_p.begin();it2!=v_p.end();++it2){
        cout<<it2->first<<" "<<it2->second<<endl;
      }
}