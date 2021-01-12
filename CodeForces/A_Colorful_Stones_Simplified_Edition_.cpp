// https://codeforces.com/problemset/problem/265/A
// Colorful Stones (Simplified Edition)
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

	string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int c = 0;
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == s1[c])
        {
            c++;
        }
    }

    cout << c + 1;
	return 0;
}
