/*It's Binod's Birthday and all his friends want to have a great GPL for him.
 But Binod being so schemy, he locked his room with a secret number and given
  his friends a Binary string of secret number.
His friends have no knowledge about binary strings. Would you help his friends
 to convert given Binary String to Decimal and participate in Binod's GPL.
Binary String is a string with only '0' and '1'  as it's characters.
Examples : "000101", "10101", "1", "0", "01" are Binary Strings.

    "Ab3024", "123", "1A", "6", "AA" are not Binary Strings*/

    //this ans is prepared by raghav agrawal.
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        int decimal=0;
        cin>>n;
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            if(s[i]!='0'){
                decimal=pow(2,(n-i-1))+decimal;
            }
            else decimal=decimal+0;
        }
              cout<<decimal<<endl;

    }
    
}
*/
// ans prepared by luv guru is..
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin >>s;
        long long int result = 0;
        long long power2=1;
        for(int i=s.size()-1;i>=0;--i){
            int binary_digit = s[i]-'0';
            result=result+(binary_digit*power2);
            power2 = 2* power2;
        }
        cout<< result<<endl;
    }
}