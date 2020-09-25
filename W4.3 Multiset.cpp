#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main()
{
    int n;  cin>>n;
    vector<int> ct(1000002);

    for(int i=0 ; i<n ; i++)
    {
        int l,h;
        cin>>l>>h;
        ct[l]++;
        ct[h+1]--;
    }
//    cout<<endl;
    for(int i=1 ; i<1000002 ; i++)
        ct[i] += ct[i-1];
    for(int i = 1 ; i<=1000002 ; i++)
        if(ct[i])
        cout<<i<<" "<<ct[i]<<endl;

}

/*

1
1 100000

*/





































