// https://codeforces.com/problemset/problem/404/A
// Valera and X
// A2OJ
// TODO
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long2
#define endl "\n"

using namespace std;

signed main()
{
	fastio

    int n;
    cin >> n;
    vector<vector<char>> a(n);
    set <char> s;
	for(int i = 0; i < n; i++)
    {
        a[i].resize(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            s.emplace(a[i][j]);
        }
    }
    bool x = true;
    char c = a[0][0];
    for (int i = 0; i < n; i++)
    {
        if (a[i][i] != c || a[i][n - i - 1] != c) 
        {
            x = false;
            break;
        }
        if (!x)
        {
            break;
        }
    }
    
    cout << ((x && s.size() == 2) ? "YES": "NO");

	return 0;
}