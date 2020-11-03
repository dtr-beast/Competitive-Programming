// https://codeforces.com/problemset/problem/58/A
// d20bdb472fd124cefabed101b434f4d0c6fb83224ab11e0d4b0ba80d2eb7013b
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

    string s;
    cin >> s;
    regex b(".*h+.*e+.*l+.*l+.*o+.*");
    cout << ((regex_match(s, b)) ? "YES" : "NO") << "\n";
	return 0;
}