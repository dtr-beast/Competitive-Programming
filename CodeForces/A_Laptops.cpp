// https://codeforces.com/problemset/problem/456/A
// Laptops
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

	int t;

    cin >> t;
    int cost, quality;
    for (int i = 0; i < t; i++)
    {
        cin >> cost >> quality;
        if (quality > cost)
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
    
	return 0;
}