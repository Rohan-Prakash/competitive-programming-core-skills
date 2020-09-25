#include<bits/stdc++.h>
using namespace std;
#define int int64_t

int dp[1001][1001];

int32_t main()
{
   int n;   cin>>n;
   vector<int> a(n),b(n);

   memset(dp , 0 , sizeof(dp));

   for(auto &i:a) cin>>i;
   for(auto &i:b) cin>>i;

   // filling up dp table
   for(int i=1 ; i<=n ; i++)
   {
      for(int j=1 ; j<=n ; j++)
      {
         if(a[i-1] == b[j-1])
            dp[i][j] = dp[i-1][j-1] + 1;
         else
            dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
      }
   }

   vector<int> seqA , seqB;
   int i = n , j = n;

   while(i>=0 and j>=0)
   {
      if(a[i-1] == b[j-1])
         seqA.push_back(i-1) , seqB.push_back(j-1) , i-- , j--;
      else
      {
         (dp[i-1][j] > dp[i][j-1]) ? i-- : j--;
      }
   }

   // for(int i=0 ; i<=n ; i++)
   // {
   //    for(int j=0 ; j<=n ; j++)
   //       cout<<dp[i][j]<<" ";
   //    cout<<endl;
   // }

   cout<<dp[n][n]<<endl;

   reverse(seqA.begin() , seqA.end());
   reverse(seqB.begin() , seqB.end());

   for(auto i : seqA)
      cout<<i<<" ";
   cout<<endl;
   for(auto i : seqB)
      cout<<i<<" ";
}

/*

6
1 2 3 3 4 6
1 6 3 3 2 4

5
1 2 3 4 5
1 3 2 4 4


*/