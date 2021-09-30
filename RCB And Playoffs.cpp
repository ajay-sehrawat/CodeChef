#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z, t;
    cin>>t;
    while ( t > 0 )
    {
        cin>>x>>y>>z;
        int sum = 0;
        sum = x + (z*2);
        if ( sum >= y )
            cout<<"YES";
        else
            cout<<"NO";
        t--;
    }
}