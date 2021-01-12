// https://codeforces.com/problemset/problem/378/A
// Playing with Dice
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

	int a, b, s1, s2, se;
    s1 = s2 = se = 0;

    cin >> a >> b;

    for (int i = 1; i < 7; i++)
    {
        int ad = abs(a - i),
        bd = abs(b - i);

        if (ad < bd)
        {
            s1++;
        }
        else if (ad > bd)
        {
            s2++;
        }
        else
        {
            se++;
        }
    }
    cout << s1 << " " << se << " " << s2 << endl;
	return 0;
}