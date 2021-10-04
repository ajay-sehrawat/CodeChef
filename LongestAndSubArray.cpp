#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while ( t-- > 0 )
    {
        long long int n;
        cin>>n;
        
        long long int powr, pre_pow, temp, max = 0, t_ans = 0;
        for ( int i=0; i<n; i++ )
        {
            powr = pow(2,i);
            if ( powr == n || powr == n+1 )
            {
                pre_pow = pow(2, i-1 );
                cout<<powr - pre_pow<<endl;
                break;
            }
            else if ( powr > n )
            {
                pre_pow = pow(2,i-1);
                temp = powr - n;
                max = powr - pre_pow;
                t_ans = max - temp; 
                if ( t_ans >= (pre_pow - pow(2,i-2)) ) 
                {
                    cout<<t_ans+1<<endl;
                    break;
                }
                else
                {
                    t_ans = pre_pow - pow(2,i-2);
                    cout<<t_ans<<endl;
                    break;
                }
            }
            
        }
        
    }
    return 0;
}