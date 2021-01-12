// https://codeforces.com/problemset/problem/499/A
// Watching a movie
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

    int x, n;
    cin >> x >> n;
    int l, r, ctime = 1, watch_time = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> l >> r;
        int diff = l - ctime;
        // Add till current time is less than a starting best moment time
        ctime += ((diff / n) * n);
        // Add the leftover time into the watch time
        watch_time += r - ctime + 1;
        // Change Current time to the ending of the best moment time
        ctime = r + 1;
    }
    cout << watch_time << endl;
	return 0;
}