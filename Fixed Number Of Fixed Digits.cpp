#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, k, t;
    cin >> t;
    while (t-- > 0)
    {
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
        }

        if ( k == n-1 ) {
            cout<<-1<<endl;
        }
        else {
            //We simply just exchage the characters we dont want
            for ( int i=1; i<n-k; i++ )
            {
                int temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
            }
            for ( int i=0; i<n; i++ )
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
