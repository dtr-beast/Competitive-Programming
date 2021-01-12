// https://codeforces.com/problemset/problem/25/A
// IQ test
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
#ifndef ONLINE_JUDGE
	freopen("1input.txt", "r", stdin);
	freopen("1output.txt", "w", stdout);
#endif
	fastio

	int n;
    cin >> n;
    vector <int> v(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];        
    }
	return 0;
}