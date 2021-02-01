// https://codeforces.com/problemset/problem/499/B
//  Lecture
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

    int n, m;
    cin >> n >> m;

    string s1, s2;
    map <string, string> v;
    for (int i = 0; i < m; i++)
    {
        cin >> s1 >> s2;
        v.insert(pair<string, string>(s1, s2));
        v.insert(pair<string, string>(s2, s1));
    }

    vector <string> v1(n), v2(n);
    char ch;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (v1[i].size() <= v[v1[i]].size())
        {
            cout << v1[i];
        }
        else
        {
            cout << v[v1[i]];
        }
        cout << " ";
    }
	return 0;
}