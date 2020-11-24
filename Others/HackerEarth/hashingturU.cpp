// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/tutorial/
// Hashing
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl << "\n";

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

    int n, roll;
    cin >> n;
    vector <string> names(n);
    string s1;
    for (int i = 0; i < n; i++)
    {
        cin >> roll;
        cin >> s1;
        names[roll - 1] = s1;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> roll;
        cout << names[roll - 1] << "\n";
    }
    return 0;
}