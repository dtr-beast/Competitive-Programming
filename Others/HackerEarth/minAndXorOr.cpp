// Code Monk
// Minimum AND xor OR
// Arrays & Strings - 4
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl << "\n";

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector <int> a(n);
        int min = INT64_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {   
                if (min > (x = ((a[i] & a[j]) ^ (a[i] | a[j]))))
                {
                    min = x;
                }
            }
        }
       cout << x << "\n";
    }
    return 0;
}