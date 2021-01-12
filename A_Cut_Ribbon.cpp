// https://codeforces.com/problemset/problem/189/A
// Cut Ribbon
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

    double m;
    cin >> m;
    double a, b, c;
    cin >> a >> b >> c;
    vector<double> v(3);
    v[0] = a;
    v[1] = b;
    v[2] = c;
    sort(v.begin(), v.end());
    a = v[0];
    b = v[1];
    c = v[2];

    int count = 0;
    count += m / a;
    m -= a * count;
    
    if (m)
    {
        while(true)
        {
            m += a;
            count--;
            if (m - b == 0 || m - c == 0)
            {
                count++;
                break;
            }
        }
    }

    cout << count;

	return 0;
}
