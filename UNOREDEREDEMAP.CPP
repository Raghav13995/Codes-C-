// NORMAL MAPS ARE USING TREES FOR THERE INTERNAL IMPLEMENTATION.
// WHILE UNORDERED MAPS ARE USING HASH TABLE FOR THERE IMPLEMENTATION.

// SO THERE IS CALCULATION OF HASH VALUE OF EVERY KEY ANS ACOORDING TO
// THATH INSERTION IS DONE.

// IN UNNOREDERED MAPS THE AVG TIME COMPLEXTIY BECOMES O(1) INSTEAD OF
// LOG(n).

// TIME COMPEXITY OF THE UNORDERED MAP IS LESS THAN NORMAL MAPS.

// we will not use complex data type as a key in unordered maps.
// because there is no hash function for the calculation of complex data 
// types.

// while in normal maps we can do this because insertion is done by
// normal comparison.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int>um;

}
// MULTI- MAPS:--
// IN MAP WE CANT STORE DATA WITH SAME KEY, BUT IT IS POSSIBLE IN 
// MULTIMAPS THATS THE ONLY DIIFERENCE BETWEEN BOTH.

// we will not use multi maps in competetive programming.
// instead of multimaps we are using map<int,vector<int>>m1;
