// https://codeforces.com/problemset/problem/165/A
// Supercentral Point
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
    vector<pair<int, int>> a;
    int l, r;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        a.push_back(make_pair(l, r));   // Make Pair is a std::function
    }
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool up = 0, down = 0, left = 0, right = 0;
        for (int j = 0; j < n; j++)
        {
            // Skip comparison for the same pair
            if (i == j)
            {
                continue;
            }

            // Just evaluate all conditions
            if (a[i].first > a[j].first && a[i].second == a[j].second)
            {
                right = 1;
            }
            if (a[i].first < a[j].first && a[i].second == a[j].second)
            {
                left = 1;
            }
            if (a[i].first == a[j].first && a[i].second < a[j].second)
            {
                down = 1;
            }
            if (a[i].first == a[j].first && a[i].second > a[j].second)
            {
                up = 1;
            }
        }
        if (up && down && left && right)
        {
            count++;
        }
    }
    cout << count;
    

	return 0;
}