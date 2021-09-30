#include <bits/stdc++.h>
using namespace std;
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main()
{
    long int n, t;
    cin >> t;
    cin.ignore();
    while (t > 0)
    {
       cin>>n;
       int comb;
       comb = nCr(n, 2);

       int perm = 0;
       
    }
}