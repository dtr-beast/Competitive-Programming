// https://codeforces.com/problemset/problem/363/B
// Fence
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
	fastio

	int n, k;
    cin >> n >> k;
    
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int min_count = 0;
    int index = 1;
    for (int i = 0; i < k; i++)
    {
        min_count += v[i];
    }

    for (int i = k; i < n; i++)
    {
        int curr_min = min_count + v[i] - v[i - k];
        if (curr_min < min_count)
        {
            index = i - k + 2;
        }
        min_count = curr_min;
    }
    
    cout << index;


	return 0;
}