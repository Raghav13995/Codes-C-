#include<bits/stdc++.h>
using namespace std;
class Nstack{
    public:
    int *arr;
    int *top;
    int *next;
    int size; // array size
    int n;
    int freespot;

    
    Nstack(int size,int n){
        this->size=size;
        this->n=n;

        arr=new int[size];
        next=new int[size];
        top=new int[n];

        // Top initialise.
        for(int i=0;i<n;i++){
            top[i]=-1;
        }

        // Next initialise.
        for(int i=0;i<size;i++){
            next[i]=i+1;
        }

        // Update last index value to -1.
        next[size-1]=-1;
        freespot=0;
    }

    void push(int element,int s){
        // Check for Overflow:-
        if(freespot==-1){
            cout<<"Overflow\n";
            return;
        }

        // Find index:-
        int index=freespot;

        // Update Freespot:-
        freespot=next[index];

        // Insert Element into the Array:-
        arr[index]=element;

        // Update Next:-
        next[index]=top[s-1];

        // Update Top:-
        top[s-1]=index;
    }
    // Pop Element from the Sth Stack.
    void pop(int s){
        if(top[s-1]==-1){
            cout<<"Empty Stack\n";
            return;
        }
        cout<<"Elemnt at Top-of Stack "<<s<<" "<<
        arr[top[s-1]]<<" is poped\n";

        // Element to be Poped:-  
        int index=top[s-1];

        // Updating Top:-
        top[s-1]=next[index];

        // Updating next freeSpot
        next[index]=freespot;

        // Updating current feespot:-
        freespot=index;
    }

    // Top Element of Nth Stack:-
    void front(int n){
        if(top[n-1]==-1){
            cout<<"Empty\n";
            return;
        }
        cout<<"Stack-"<<n<<" top: "<<arr[top[n-1]]<<endl;
    }

};

int main()
{
    Nstack one(10,3);
    one.front(1);
    one.push(10,1);
        one.front(1);

    one.push(11,1);
        one.front(1);

    one.push(12,1);
        one.front(1);

    one.push(13,2);
        one.front(2);

    one.push(14,1);
        one.front(1);

    one.push(15,2);
        one.front(2);

    one.push(16,1);
        one.front(1);

    one.push(17,2);
        one.front(2);

    one.push(18,1);
        one.front(1);

    one.push(19,1);
        one.front(1);

    one.push(20,1);
        one.front(1);

    one.pop(1);
        one.front(1);


}