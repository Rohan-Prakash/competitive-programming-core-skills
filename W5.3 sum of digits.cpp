#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int dp[1000][1000];

int sub(int sum , int len)
{
    if(len == 0)
        return sum == 0;
    if(sum == 0)
            return 0;

    if(dp[sum][len] != -1)
        return dp[sum][len];

    int ct = 0;
    for(int i=0 ; i<=9 ; i++)
        if(sum - i >=0 )
        ct += sub(sum-i , len-1);
    return dp[sum][len] = ct;
}

int32_t main()
{
    int s,l;
    cin>>s>>l;

    memset(dp, -1 , sizeof(dp));

    if(s == 0)
    {
        if(l == 0 || l >1)
            cout<<0;
        else
            cout<<1;

        getchar();
        getchar();
        return 0;
    }

    int ans = sub(s ,l);
//    cout<<endl<<'#'<<ans<<'#'<<endl;
    cout<<ans;
    getchar();
    getchar();
}







































