#include<bits/stdc++.h>
using namespace std;


int main()
{
    int r,c;
    cin>>r>>c;
//    r = 4 , c = 3;

    if(r > c)
        swap(r , c);

    bool seq[] = {1,0,1};

    int ans = 0;

    for(int i=0 ; i<((r&1) ? r : r-1) ; i++)
    {
        if(seq[i%3])
            {
                ans += c;
//                cout<<c<<endl;
            }
        else
            {
                int temp = (c/3)*2 + (c%3 == 2 ? 1 : 0);
                ans += temp;
//                cout<<temp<<endl;
            }
    }
    if(r%2 == 0)
        ans+=(c/3)*2 + (c%3 == 2 ? 1 : 0);


    if(r == 1)
        ans = (c/3)*2 + (c%3 == 2 ? 1 : 0);
    if(r == 1 and c == 1)
        ans = 0;

// 3 100

//cout<<endl;
    cout<<ans;
}







