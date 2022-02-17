//
//
//
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
    fastio;

    int y, k, n, div_add;
    cin >> y >> k >> n;

    // Calculate how much needs to be added to make the number divisible by k 
    div_add = k * ceil(y / (k * 1.0)) - y;

    bool flag = false;
    if (n - y > 0)
    {
        int i = div_add;
        // Since 'x' > 0
        if (div_add == 0)
            i += k;
        for (; i <= n - y; i += k)
        {
            cout << i << " ";
        }
        // To check if any value is printed
        if (i != div_add && i != k)
        {
            flag = true;
        }
    }
    if (!flag)
    {
        cout << -1;
    }

    return 0;
}