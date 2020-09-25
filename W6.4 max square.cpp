#include<bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
   int n,k; cin>>n>>k;
   
   vector<vector<int>> a(n , vector<int>(n)),
                     p(n+1 , vector<int>(n+1));
   
   for(auto &i : a)
      for(auto &j : i)
         cin>>j;
   
   for(int i=1 ; i<=n ; i++)
   {
      for(int j=1 ; j<=n ; j++)
      {
         p[i][j] = p[i-1][j] + p[i][j-1] + a[i-1][j-1] - p[i-1][j-1];
      }
   }

   int mx = 0;
   for(int i=k ; i<=n ; i++)
   {
      for(int j=k ; j<=n ; j++)
      {
         int r1 = p[i][j];
         int r2 = p[i-k][j];
         int r3 = p[i-k][j-k];
         int r4 = p[i][j-k];
         int area = r1 - r2 - r4 + r3;
         mx = max(mx , area);
      }
   }
   cout<<mx;
}
/*

3 2
10 2 10
1 1 1
10 1 13

*/