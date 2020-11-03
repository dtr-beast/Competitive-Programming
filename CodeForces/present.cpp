// https://codeforces.com/problemset/problem/136/A
// TODO
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
	freopen("1input.txt", "r", stdin);
	freopen("1output.txt", "w", stdout);
#endif
	fastio

	int t;
	cin >> t;
    vector <int> pres;
	pres.resize(t);
    for (int i = 0; i < t; i++)
    {
        cin >> pres[i];
    }
    
	return 0;
}