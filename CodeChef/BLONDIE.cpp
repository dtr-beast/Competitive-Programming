// https://www.codechef.com/problems/BLONDIE
// Man with No Name
// Prefix Sum
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

    int t, n, k, count;
    cin >> t;
    while (t--)
    {
        count = 0;
        cin >> n;
        vector <int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == -1)
            {
                a[i] = b[i - 1] / i;
            }

            count += a[i];
            b[i] = count;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}