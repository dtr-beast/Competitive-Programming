// https://codeforces.com/problemset/problem/469/A
// I Wanna Be the Guy
// A2OJ
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

    set <int> a;
    int n;
    cin >> n;
    
    int x;
    cin >> x;

    int num;
    while (x--)
    {
        cin >> num;
        a.insert(num);
    }
    
    cin >> x;

    while (x--)
    {
        cin >> num;
        a.insert(num);
    }

    if (a.size() == n)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
    return 0;
}