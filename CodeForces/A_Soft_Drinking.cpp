// https://codeforces.com/problemset/problem/151/A
// Soft Drinking
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

	int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Method given in the Note of the Question
    int mil = k * l;
    int toast_drink = mil / nl,
    toast_lime = c * d,
    toast_salt = p / np;

    cout << min(min(toast_drink, toast_lime), toast_salt) / n;

	return 0;
}