// https://codeforces.com/problemset/problem/467/B
// Fedor and New Game
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
	fastio

    int n, m, k;

    cin >> n >> m >> k;

    vector<int> v(m);

    int fedor;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    cin >> fedor;

    int friends = 0;
    int diff;
    for (int i = 0; i < m; i++)
    {
        diff = v[i] ^ fedor;
        // * IMPORTANT: Count Number of Setbits in an integer (number of 1s in a binary of a number)
        if (__builtin_popcount(diff) <= k)
        {
            friends++;
        }
    }
    
    cout << friends;

	return 0;
}