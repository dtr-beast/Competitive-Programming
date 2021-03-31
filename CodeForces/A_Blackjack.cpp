// https://codeforces.com/problemset/problem/104/A
// Blackjack
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;
// Basic Calculation shows these are the only cases for all the different scenarios
signed main()
{
	int n;
    cin >> n;
    n -= 10;
    if (n <= 0 || n >= 12)
    {
        cout << 0;
    }
    else if (n <= 9 || n == 11)
    {
        cout << 4;
    }
    else
    {
        cout << 15;
    }
	return 0;
}