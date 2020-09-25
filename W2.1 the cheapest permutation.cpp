#include<bits/stdc++.h>
using namespace std;

int n , ans = 1e9+5;
vector<vector<int>> mat;
vector<int> a,ansArray;

void sub(int l,int h)
{
    if(l == h)
    {
        int cost = 0;
        for(int i=1 ; i<a.size() ; i++)
        {
            int x = a[i-1];
            int y = a[i];

            cost += mat[x-1][y-1];
        }
        if(cost < ans)
            ansArray = a , ans = cost;
    }
    else
        for(int i=l ; i<=h ; i++)
            swap(a[i] , a[l]),
            sub(l+1, h),
            swap(a[i] , a[l]);
}
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n;
    mat.resize(n , vector<int>(n));

    /// input matrix
    for(auto &i:mat)
    for(auto &j:i)
    cin>>j;

    /// array init
    a.resize(n),
    ansArray.resize(n);
    for(int i=1; i<=n ; i++)        a[i-1] = i;
    
    /// calling
    sub(0 , n-1);

    for(auto i : ansArray)
        cout<<i<<" ";
}
