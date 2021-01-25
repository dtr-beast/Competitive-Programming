// https://codeforces.com/problemset/problem/361/A
// Levko and Table
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

	int n, k;
    cin >> n >> k;

    int ele = k - n + 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << ele << " ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }

	return 0;
}