    #include<bits/stdc++.h>
    using namespace std;
    int power(int a,int b){
        // base case:-- 
        if(b==0)
        return 1;
        if(b==1)
        return a;

        // recursive code:--
        int ans=power(a,b/2);

        // if b is even
        if(b%2==0){
            return ans*ans;
        }

        // if b is odd
        else
        return a*ans*ans;
    }
    int main()
    {
        int a;
        cout<<"enter the integer\n";
        cin>>a;
        int b;
        cout<<"enter the value of power\n";
        cin>>b;

        cout<<"the resultant answer is "<<power(a,b);
    }