// https://codeforces.com/problemset/problem/353/A
// Domino
// A2OJ
// TODO
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
	fastio

	int n;
    cin >> n;
    
    vector<pair<int, int>> v(n);
    int x, y,
    xi = 0, yi = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v[i] = pair<int, int>(x, y);
        
        xi += x;
        yi += y;
    }

    int seconds = 0;

    if ((xi & 1) || (yi & 1))
    {

        
    }

	return 0;
}