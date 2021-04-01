// https://codeforces.com/problemset/problem/116/A
// Tram
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

	int n;
    cin >> n;
    int passengers = 0;
    int a = 0, b = 0;
    int max_ele = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        passengers += b - a;
        if (max_ele < passengers)
        {
            max_ele = passengers;
        }
    }

    cout << max_ele;

	return 0;
}