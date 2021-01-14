// https://codeforces.com/problemset/problem/451/A
// Game With Sticks
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

	int m, n;
    cin >> m >> n;

    // Min Value
    int x = (m < n) ? m : n; 
    
    // If x is odd then Akshat will win
	cout << ((x & 1) ? "Akshat" : "Malvika"); 
	return 0;
}