#include<bits/stdc++.h>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    char *name;
    hero(){
        cout<<"simple contructor called "<<endl;
        name=new char[100];              
    }
    // parameterised constructor.
    hero(int health){
        this->health=health;
        cout<<"health is "<<health;
    }
    hero(int health,char level){
        this->health=health;
        this->level=level;
    }
    
     hero( hero &temp){
       cout<<"copy constructor is called\n";
       char *ch=new char[strlen(temp.name)+1];
       strcpy(ch,temp.name);
       this->name =ch;
       this->health=temp.health;
       this->level=temp.level;
     }
    void print(){
        cout<<endl;
        cout<<"name : "<<name<<", ";
        cout<<"health : "<<health<<", ";
        cout<<"level : "<<level<<endl;
        cout<<endl;

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
    void setname(char name[]){
        this->name=name;  // strcpy(this->name,name);
    }
    
};
int main()
{
    hero hero1;
    hero1.sethealth(23);
    hero1.setlevel('D');
    char name[7]="Raghav";
    hero1.setname(name);
    //hero1.print();
    // NOW FOR USING DEFAULT CONSTRUCTOR WE ARE COMMENTING OUT OUR OWN CREATED
    // COPY CONSTRUCTOR.

    hero hero2(hero1); // OR hero hero2 = hero1;
    
    // hero2.print();
    // IF WE MADE CHANGE IN HERO1 than see want happens
    hero1.name[0]='P';
    hero1.print();
    hero2.print();

    hero1=hero2;          // this is assignment operator.
    hero1.print();        // this copy hero2 in hero1
                          // hero1.health=hero2.health
                          // hero1.level=hero2.level
                          // hero1.name=hero2.name
    hero2.print();
 
}