// Link Missing
// Stones on the Table
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

    int n, count = 0;
    cin >> n;
    char a, b;
    cin >> a;
    n--;
    while (n--)
    {
        cin >> b;
        if (a == b)
        {
            count++;
        }
        a = b;
    }
    cout << count;

    return 0;
}