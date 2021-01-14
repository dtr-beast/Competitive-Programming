// https://codeforces.com/problemset/problem/230/A
// Dragons
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

    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> a;
    
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a.push_back({x, y});
    }
    
    sort(a.begin(), a.end(), comp);

    int health = s;
    bool win = true;
    for (int i = 0; i < n; i++)
    {
        if (health < a[i].first)
        {
            cout << "NO";
            win = false;
            break;
        }
        health += a[i].second;
    }
    if (win)
    {
        cout << "YES";
    }
    return 0;
}

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first < a.second)
    {
        return true;
    }
    else if (a.first == a.second)
    {
        if (a.second > b.second)
        {
            return true;
        }
    }
    return false;
}