// https://codeforces.com/problemset/problem/160/A
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

	int t, sum = 0;
	cin >> t;
    vector <int> coins;
    coins.resize(t);
	for (int i = 0; i < t; i++)
    {
        cin >> coins[i];
        sum += coins[i];
    }
    sort(coins.begin(), coins.end(), greater<int>());
    sum /= 2;
    int sumn = 0;
    for (int i = 0; i < t; i++)
    {
        sumn += coins[i];
        if (sumn > sum)
        {
            cout << i + 1;
            break;
        }
    }
    
	return 0;
}