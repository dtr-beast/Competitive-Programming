// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/repeated-k-times/
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

	int size, k;
    cin >> size;
    std::map <int, int> occur;
    while (size--)
    {
        cin >> k;
        occur[k]++;
    }
    cin >> k;
    
    for (auto x: occur)
    {
        if (x.second == k)
        {
            cout << x.first << "\n";
            break;
        }
    }
	return 0;
}