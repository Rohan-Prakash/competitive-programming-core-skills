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

int toRank(char c) {
    switch (c) {
        case 'T': return 10;
        case 'J': return 11;
        case 'Q': return 12;
        case 'K': return 13;
        case 'A': return 14;
    }

    assert('2' <= c && c <= '9');
    return c - '0';
}

int main() {

    IOS;
    vi ranks;
    set<char> suits;
    for (int i = 0; i < 5; ++i) {
        string card;
        cin >> card;
        ranks.push_back(toRank(card[0]));
        suits.insert(card[1]);
    }

    if (suits.size() > 1) {
        print("NO\n");
        return 0;
    }

    sort(ranks.begin(), ranks.end());
    for (int i = 0; i < 4; ++i) {
        if (ranks[i] + 1 != ranks[i + 1]) {
            if (i < 3 || ranks[0] != 2 || ranks[4] != 14) {
                print("NO\n");
                return 0;
            }
        }
    }

    print("YES\n");

    return 0;
}
