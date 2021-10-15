#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{   
    ll int t;
    cin >> t;
    while (t-- > 0)
    {
        
        ll int n;
        ll int d = 0;
        cin >> n >> d;
        ll int temp, count = 0, c = 0;
        ll int n_i = n;
        if (d == 0)
        {
            string str = to_string(n);
            ll len = str.length();

            for ( ll int i=0; i<len; i++ )
            {
                if ( str[i] == '0' )
                {
                    temp = i;
                    break;   
                }
            }
            for ( ll int i=temp; i<len; i++ )
            {
                str[i] = '1';
            }
            ll int n = stoi(str);
            cout<<n - n_i << "\n";
        }
        else
        {
            do
            {
                c++;
                temp = n % 10;
                if (temp == d)
                {
                    count = c;
                }
                n = n / 10;
            } while (n > 0);

            if (count == 0)
                cout <<"0"<<"\n";
            else
            {
                temp = 1;
                for (ll int i = 1; i < count; i++)
                {
                    temp = temp * 10;
                }
                count = n_i % temp;
                cout << temp - count << "\n";
            }
        }
    }
}