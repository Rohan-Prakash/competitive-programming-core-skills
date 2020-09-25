#include<bits/stdc++.h>
using namespace std;
#define inf 1e18
#define ll long long
#define nl cout<<"\n";
#define all(v) v.begin(),v.end()
#define input(v) for(auto &i:v) cin>>i;
#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define forn(i, l, r) for (int i = int(l); i < int(r); ++i)
#define vi vector<int>
#define vii vector<vector<int>>
#define pb push_back
#define IOS ios_base::sync_with_stdio(0),cin.tie(0);
void print(ll a)                  {              cout<<a<<'\t'<<'\n';}
void print(ll a,ll b)                {          cout<<a<<'\t'<<b<<'\t'<<'\n';}
void print(ll a,ll b,ll  c)             {      cout<<a<<'\t'<<b<<'\t'<<c<<'\n';}
void print(ll a,ll  b,ll  c,ll  d)         {   cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d<<'\n';}
void print(ll a,ll  b,ll  c,ll  d,ll  e)      { cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d<<'\t'<<e<<'\n';}
void print(vector<int> &a)  {for(auto i:a)  cout<<i<<" ";   nl;}
void print(string s)   {cout<<s, nl;}



int main()
{
   int n;   cin>>n;
   vi a(n); input(a);

   int ct = 0;

   int pos = max_element(all(a)) - a.begin();
bool f = 0;
   for(int i=pos+1 , ct = 1 ; i<n ; i++)
   {
       if(a[i] == a[pos])
        ct++;
       if(ct == 3)
       {
           f = 1;
           a.erase(a.begin() + i);
           break;
       }
   }

   if(f == 0)
    a.erase(a.begin() + pos);

   print(a);

}























