#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while ( t-- > 0 )
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum = a+b+c;
        if ( sum <= d )
        {
            cout<<"1"<<endl;
        }
        else
        {
            int sum1, sum2;
            sum1 = a + b;
            sum2 = a + c;
            sum = a + c;
            if  ( sum1 <= d || sum2 <= d || sum <= d )
                cout<<"2"<<endl;
            else
                cout<<"3"<<endl;
        }
    }
    return 0;
}