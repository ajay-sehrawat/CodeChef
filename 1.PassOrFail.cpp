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
        int n,x,p;
        cin>>n>>x>>p;

        if ( p <= ( (x*3)  - (n - x)) )
            cout<<"PASS"<<endl;
        else
            cout<<"FAIL"<<endl;;

    }
    return 0;
}
