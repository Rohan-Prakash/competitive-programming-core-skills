#include<bits/stdc++.h>
using namespace std;
#define ll int64_t
#define endl '\n'

int main()
{
    ll n;cin>>n;
    // ios_base::sync_with_stdio(0),cin.tie(NULL);
    ll maxSum=INT_MIN,maxDif=INT_MIN,minSum=INT_MAX,minDif=INT_MAX;
    ll a=0,b=0,c=0,d=0;
    for(ll i=1;i<=n;i++)
    {
        ll x,y;cin>>x>>y;
        if(x+y>maxSum)
        {
            maxSum=x+y;
            a=i;
        }
        if(x-y>maxDif)
        {
            maxDif=x-y;
            b=i;
        }
        if(x+y<minSum)
        {
            minSum=x+y;
            c=i;
        }
        if(x-y<minDif)
        {
            minDif=x-y;
            d=i;
        }

        if(maxSum-minSum > maxDif-minDif)
            cout<<a<<" "<<c<<endl;
        else
            cout<<b<<" "<<d<<endl;
    }

}