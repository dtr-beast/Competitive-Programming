// Link Missing
// Drinks
// A2OJ
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

    double t ,sum = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    // For getting answer as: (fixed).(setprecision(x)) 56.1234
    cout << fixed << setprecision(4) << sum / t;

    return 0;
}