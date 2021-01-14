// https://codeforces.com/problemset/problem/58/A
// Chat room
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

    string s;
    cin >> s;
    regex b(".*h+.*e+.*l+.*l+.*o+.*");
    cout << ((regex_match(s, b)) ? "YES" : "NO") << "\n";
	return 0;
}