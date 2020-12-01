// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k/0
// TODO: Prefix sum
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

    int t, n, k, c, count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector <int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        for (int i = 0, j = k; i < n; i++)
        {

        }
    }
    return 0;
}