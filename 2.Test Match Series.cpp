#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while ( t-- > 0 )
    {
        int arr[5],count1 = 0, count2 = 0;;
        for ( int i=0; i<5; i++ )
        {
            cin>>arr[i];
            if ( arr[i] == 1 )
                count1++;
            else if ( arr[i] == 2 )
                count2++;
        }

        if ( count1 == count2 )
            cout<<"DRAW"<<endl;
        else if ( count1 > count2 )
            cout<<"INDIA"<<endl;
        else
            cout<<"ENGLAND"<<endl;

    }
    return 0;
}