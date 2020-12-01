// https://codeforces.com/problemset/problem/476/A
// Dreamoon and Stairs
// A2OJ
// 
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

    int n, m;
    cin >> n >> m;

    vector<int> a;
    int ones = n, twos = 0;
    while (ones >= 0)
    {
        if ((ones + twos) % m == 0)
        {
            a.push_back(ones + twos);
        }
        ones -= 2;
        twos++;
    }
    if (a.empty())
    {
        cout << -1;
    }
    else
    {
        cout << *min_element(a.begin(), a.end());
    }
    

    return 0;
}