#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int> split(string input ,char d = ' ')
{
    string del = "\\";
           del += d;
    regex _del(del);
    vector<string> temp(sregex_token_iterator(input.begin() , input.end() , _del , -1) , sregex_token_iterator());
    int n = temp.size();
    vector<int> a(n);

    for(int i=0 ; i<n ; i++)
        a[i] = stoi(temp[i]);
    return a;
}


int32_t main()
{
    string input , s;
    vector<bool> exp;
    vector<int> arr;
    int sum = 0 , a;


    cin>>input;
    if(input[0] == '+')
        input[0] = '0';

    for(auto &i : input)
    {
        if(i == '+' || i=='-')
            exp.push_back( (i=='+') ? 1 : 0),
            i = ' ';
    }

    arr = split(input);

    sum = arr[0];

    for(int i=1 , j = 0 ; i<arr.size() ; i++)
    {
        int x = arr[i];

        exp[j++] == 1 ? sum += x : sum -= x;
    }
    cout<<sum;






}
















