












#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<int> vec{10, 20, 30,30, 40,8,0,67,0};

//vector<int>::iterator it;


for (int i = 0; i < vec.size(); i++)
	cout << " " << vec[i];

cout << "\n";


int ser = 30;
int cnt=count(vec.begin(),vec.end(),30);
cout<<"count-"<<cnt<<endl;

auto it=find(vec.begin(), 
				vec.end(), ser);

if (it != vec.end()) 
{
	cout << "Element " << ser << 
				" found at position : ";
	cout << it - vec.begin() << 
				" (counting from zero) \n";
    
  }
  cout<<"size"<<vec.size()<<endl;
  cout<<vec[2]<<endl;
cout<<vec[3]<<endl;
vec.erase(it);
  cout<<"size"<<vec.size()<<endl;

cout<<vec[2]<<endl;
cout<<vec[3]<<endl;

return 0;
}
