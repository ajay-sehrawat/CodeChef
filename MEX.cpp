#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while ( t-- > 0 )
    {
        long long int x;
        cin>>x;

        long long int powr = 0, p_pow = 0, count = 0;
        if  (x == 0 )
        {
            cout<<"1"<<endl;
        }
        else if ( x == 1 )
        {
            cout<<"2"<<endl;
        }
        else
        {
            for ( int i=1; i<=x; i++ )
            {
                powr = pow(2,i);
                if ( powr == x + 1 || powr == x  )
                {
                    cout<<powr<<endl;
                    break;
                }
                else if ( powr > x )
                {
                    p_pow = pow(2, i-1);
                    cout<<p_pow<<endl;
                    break;
                }
            }
        }

    }
    return 0;
}