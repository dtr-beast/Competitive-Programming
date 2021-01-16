// https://codeforces.com/problemset/problem/339/B
// Xenia and Ringroad
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

    int n, m;
    cin >> n >> m;

    vector<int> v(m);

    int x;
    int currentPos = 1, time = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        if (currentPos < x)
        {
            time += x - currentPos;
            currentPos = x;
        }
        else if (currentPos > x)
        {
            time += n - currentPos;
            currentPos = 0;
            currentPos += x;
            time += x;
        }
    }

    cout << time;

	return 0;
}