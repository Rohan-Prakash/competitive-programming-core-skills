#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<double> a(n);

    for(auto &i:a)
        cin>>i;

    double num = 0 , frac = 0;

    for(auto i : a)
        num += i,
        frac+= 1/i;

    cout<<std::fixed<<setprecision(10)<<num+frac;

}

