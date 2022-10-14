#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
int main(){
    FAST1;
    FAST2;
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];

        for ( int i=0; i<n; i++ )
            cin>>a[i];
        
        int mx =1;
        int temp = 1;
        sort(a, a+n);
        for ( int i=1; i<n; i++ )
        {
            if ( a[i] == a[i-1] )
            {
                temp++;
                mx = max(mx, temp);
            }
            else
                temp = 1;
        }
        if ( n == mx )
            cout<<"0"<<endl;
        else if ( mx == 1)
            cout<<"-1"<<endl;
        else
            cout<<(n-mx+1)<<endl;

    }
}