#include <bits/stdc++.h>
using namespace std;

void res(double x,double y,double error)
{
	if (abs(x-y)<error)
        cout << "SUM(A)=SUM(B)" << "\n";
    else if (x>y+error)
        cout << "SUM(A)>SUM(B)" << "\n";
    else
        cout << "SUM(A)<SUM(B)" << "\n";
}
int main(){
    int n;
    double error , sum_a , sum_b;
    cin>>n;
    vector<double> a(n);
    vector<double> b(n);
    for(auto &i:a)  cin>>i;
    for(auto &i:b)  cin>>i;

    sum_a = accumulate(a.begin() , a.end(),0.0);
    sum_b = accumulate(b.begin() , b.end() , 0.0);

    error = (double)n/(200000.0);
    res(sum_a,sum_b,error);

    return 0;
}
