#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, x, y;
    cin>>t;
    while( t-- > 0 )
    {
        cin>>x>>y;
        if ( (x+y)%2 == 0 )
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}