#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);

    string s;   cin>>s;
    int n = s.length();
    vector<vector<int>> dp(n+1 , vector<int> (26));
    for(int i=1 ; i<=n ; i++)
    {
        char c = s[i-1];

        dp[i] = dp[i-1];
        dp[i][c-'a'] ++;
    }

    int q;  cin>>q;
    while(q--)
    {
        int lo,hi;
        cin>>lo>>hi;

        int maxCT = 0;
        int corrChar = 0;

        for(int i=0 ; i<26 ; i++)
        {
            int ct = dp[hi][i] - dp[lo-1][i];

            if(ct > maxCT)
                maxCT = ct , corrChar = i;
        }
        cout<<(char)(corrChar+'a')<<endl;
    }






}
