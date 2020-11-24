// Code Monk
// Monk and Rotation
// Arrays & Strings - 1
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

    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector <int> a(n);
        k %= n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[(i + k) % n];
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}