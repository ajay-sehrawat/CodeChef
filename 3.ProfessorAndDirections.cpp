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
        int n;
        cin>>n;
        char s[n];
        for ( int i=0; i<n; i++ )
        {
            cin>>s[i];
        }
        int rr = 0, ll=0;
        for ( int i=0; i<n; i++ )
        {
            if ( s[i] == 'R' )
            {
                rr++;
                if ( rr >= 2 )
                {
                    cout<<"YES"<<endl;
                    break;
                }
                else
                    ll = 0;
            }
            else if ( s[i] == 'L' )
            {
                ll++;
                if ( ll>= 2 )
                {
                    cout<<"YES"<<endl;
                    break;
                }
                else
                    rr = 0;
            }
        }
        if ( rr >= 2 || ll >= 2 )
            ;
        else
            cout<<"NO"<<endl;


    }
    return 0;
}
