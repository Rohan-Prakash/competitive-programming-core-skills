#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);

    int n;  cin>>n;
    vector<int> a(n);

    for(auto &i:a)
        cin>>i;

    int minIndex=0, maxIndex =0,
        minVal = INT_MAX, maxVal = 0;

    for(int i=0 ; i<n ; i++)
    {
        if(a[i] < minVal)
            minVal = a[i] , minIndex = i;
        if(a[i] > maxVal)
            maxVal = a[i] , maxIndex = i;

        cout<<min(minIndex , maxIndex)+1<<" "<<max(minIndex , maxIndex)+1<<endl;
    }





}
