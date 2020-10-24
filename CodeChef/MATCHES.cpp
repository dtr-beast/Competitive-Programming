// https://www.codechef.com/problems/MATCHES
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main()
#define int long long
{
#ifndef ONLINE_JUDGE
	freopen("1input.txt", "r", stdin);
	freopen("1output.txt", "w", stdout);
#endif
	fastio
	int t, a, b, ans, digits[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	cin >> t;
	while (t--)
	{
        ans = 0;
        cin >> a >> b;
        a += b;
        while (a != 0)
        {
            ans += digits[a % 10];
            a /= 10;
        }
        cout << ans << "\n";;
	}

	return 0;
}