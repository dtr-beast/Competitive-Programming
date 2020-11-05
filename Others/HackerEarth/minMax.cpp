// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/min-max-8/
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

	int a;
    cin >> a;
    vector <int> num(a);
    for (int i = 0; i < a; i++)
    {
        cin >> num[i];
    }
    int min = num[0], max = num[1];
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += num[i];
        if (min > num[i])
        {
            min = num[i];
        }
        if (max < num[i])
        {
            max = num[i];
        }
    }
    cout << sum - max << " " << sum - min << "\n";
	return 0;
}