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
        int x,y;
        cin>>x>>y;
        cin.ignore();
        string s;
        getline(cin,s);

        int len = s.length(), c_days = 0, c_streak = 0, temp = 0;
        for ( int i=0; i<len; i++ )
        {
            if ( s[i] == '1' )
            {
                c_days++;
                temp++;
                if ( temp > c_streak )
                {
                    c_streak = temp;
                }
            }
            else 
            {
                temp  = 0;
            }  
        }
        int total = (c_days*x) + (c_streak*y);
        cout<<total<<endl;


    }
    return 0;
}