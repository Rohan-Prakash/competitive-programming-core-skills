#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;   cin>>n;
   vector<int> a(n) , lis;
   for(auto &i:a)
    cin>>i;

   for(auto i : a)
   {
       auto pos = lower_bound(lis.begin() , lis.end() , i);
       if(pos == lis.end())
        lis.push_back(i);
       else
        *pos = i;

   }
   cout<<lis.size();
}
















