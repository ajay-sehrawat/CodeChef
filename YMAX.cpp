#include<bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
int main()
{
    
    int t;
    cin>>t;
    while ( t-- > 0 )
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int z_count = 0;
        for ( int i=0; i<n; i++ )
        {
            cin>>arr[i];
            if ( arr[i] == 0 )
            {
                z_count++;
            }
        }
        if ( z_count == 0 )
        {
            cout<<"0"<<endl;
        }
        else
        {
            //No of zeroes in mEX is equal to n always
            if ( k <= n && arr[0] == 0 )
            {
                cout<<"0"<<endl;
            }
        }

    }
    return 0;
}