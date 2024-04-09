#include<bits/stdc++.h>
using namespace std;
class time2{
    public:
    int hour;
    int min;
    int sec;

    time2(int hour,int min,int sec){
        this->hour=hour;
        this->min=min;
        this->sec=sec;
    }
    
};
void sum (time2 t1,time2 t2){
        int hourtotal=t1.hour+t2.hour;
        int mintotal=t1.min+t2.min;
        int sectotal=t1.sec+t2.sec;

        if(sectotal>=60){
            mintotal=mintotal+sectotal/60;
            sectotal=sectotal%60;
        }
        if(mintotal>=60){
            hourtotal=hourtotal+mintotal/60;
            mintotal=mintotal%60;
        }
        cout<<hourtotal<<":"<<mintotal<<":"<<sectotal<<endl;  
    }
int main()
{   
    cout<<"Enter hour:min:sec for t1\n";
    int hour,min,sec;
    cin>>hour>>min>>sec;
    time2 t1(hour,min,sec);
    cout<<"Enter hour:min:sec for t2\n";
    cin>>hour>>min>>sec;
    time2 t2(hour,min,sec);

    sum(t1,t2);

    


    
}