// https://www.codechef.com/problems/CHOPRT
#include <bits/stdc++.h>
using namespace std;

int main()
#define int long long
{
#ifndef ONLINE_JUDGE
	freopen("1input.txt", "r", stdin);
	freopen("1output.txt", "w", stdout);
#endif
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << ((a > b) ? ">": (a < b) ? "<": "=") << "\n";
    }
	return 0;
}