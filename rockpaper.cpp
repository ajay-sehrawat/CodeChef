#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);

char match(char a, char b)
{
    if (a == b)
        return a;
    else if (a == 'R' && b == 'P' || a == 'P' && b == 'R')
        return 'P';
    else if (a == 'R' && b == 'S' || a == 'S' && b == 'R')
        return 'R';
    else if (a == 'P' && b == 'S' || a == 'S' && b == 'P')
        return 'S';
}
int main()
{
    FAST1;
    FAST2;
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n];
        for (int i = 0; i < n; i++)
            cin >> s[i];

        char temp, win, temp2;
        for (int i = 0; i < n; i++)
        {
            if ( s[i] == s[i-1] && i > 0 )
            {
                printf("%c", temp);
                continue;
            }
            temp = s[i];
            for (int j = i + 1; j < n; j++)
            {
                if (temp == s[j])
                {
                    continue;
                }
                win = match(temp, s[j]);
                if (win == s[j])
                {
                    temp = s[j];
                }
            }
            printf("%c", temp);
        }
        printf("\n");
    }
}