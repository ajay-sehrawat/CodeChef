#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while ( t-- > 0 )
    {
        int a,b,c;
        cin>>a>>b>>c;
        if ( a == 7 || b == 7 || c == 7 )
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    return 0;
}