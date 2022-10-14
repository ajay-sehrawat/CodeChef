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
        char pref[3];
        char acc[2];
        for ( int i=0; i<3; i++ )
            cin>>pref[i];
        for ( int i=0; i<2; i++ )
            cin>>acc[i];
        

            if ( acc[0] == pref[2] )
                cout<<acc[1]<<endl;

            else if ( acc[0] == pref[0] )
                cout<<acc[0]<<endl;
            else 
            {
                if ( acc[0] == pref[1] )
                {
                    if ( acc[1] == pref[2] )
                        cout<<acc[0]<<endl;
                    else
                        cout<<acc[1]<<endl;
                }
            }
    }
}