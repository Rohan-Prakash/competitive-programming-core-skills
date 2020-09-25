#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;    cin>>n>>m;
    string a,b; cin>>a>>b;
    int ins , del , sub;
                cin>>ins>>del>>sub;

//    string b = "execution" , a = "intention";
//    int n = a.length() , m = b.length();


    vector<vector<int>> dp(n+1 , vector<int> (m+1));

    auto printdp = [&]()
    {
        cout<<"\t\t";
        for(auto i : b)
            cout<<i<<"\t";
        cout<<endl;
        cout<<"\t";
        for(int i=0 ; i<=n ; i++)
        {
            if(i)
                cout<<a[i-1]<<"\t";

            for(int j=0 ; j<=m ; j++)
                {
                    cout<<dp[i][j]<<"\t";
                }
            cout<<endl;
        }
    };


    for(int i=0 ; i<=n ; i++)
        dp[i][0] = del*i;
    for(int i=0 ; i<=m ; i++)
        dp[0][i] = ins*i;


//    printdp();

    for(int i = 1; i<=n ; i++)
    {
        for(int j=1 ; j<=m ; j++)
        {
            dp[i][j] = min({
                           dp[i][j-1] + ins,
                           dp[i-1][j] + del,
                           dp[i-1][j-1] + (a[i-1] == b[j-1] ? 0 : sub)
                           });
        }
    }

//    cout<<endl<<endl;
//    printdp();

    cout<<dp[n][m];

//    getchar();
//    getchar();
}







































