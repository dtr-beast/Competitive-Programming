// https://codeforces.com/problemset/problem/208/A
// TODO
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
	cin >> s1;
    vector <int> re;
    b = s1.length();
    s2 = "WUB";
    count = 0;
    for (int i = 0; i < b - 2;)
    {
        cout << s1[i];
        if (s1[i] == 'W' && s1[i + 1] == 'U' && s1[i + 2] == 'B')
        {
            if (i >= 3)
            {
                cout << " ";
            }
            i += 3;
        }
        else
        {
            i++;
        }
        
    }
    cout << "\n" << count;
	return 0;
}