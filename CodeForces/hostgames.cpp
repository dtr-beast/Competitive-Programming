// https://codeforces.com/problemset/problem/268/A
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

	int t, a, b, c, count;
	string s1, s2, s3;
	cin >> t;
	vector <vector<int>> col(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        col[i].push_back(a);
        col[i].push_back(b);
    }
    count = 0;
    for (int i = 0; i < col.size(); i++)
    {
        c = col[i][0];
        for (int j = 0; j < col.size(); j++)
        {
            if (i != j)
            {
                if (c == col[j][1])
                {
                    count++;
                }
            }
        }
    }
    cout << count;  
	return 0;
}