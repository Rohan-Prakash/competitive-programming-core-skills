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
   string s;
   cin>>s;

   if(count(all(s) , '9') == s.length())
    cout<<s.length()+1;
   else
    cout<<s.length();

}























