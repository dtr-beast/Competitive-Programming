// https://codeforces.com/problemset/problem/75/A
// Life Without Zeros
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

int removeZero(int);
signed main()
{
	fastio

	int a, b, c;

    cin >> a >> b;

    c = a + b;

    a = removeZero(a);
    b = removeZero(b);
    c = removeZero(c);

    cout << (c == (a + b) ? "YES" : "NO");

	return 0;
}
int removeZero(int n)
{
    string s = "";
    while (n != 0) 
    {
        int temp = n % 10;
        if (temp != 0)
        {
            s = to_string(temp) + s;
        }
        n /= 10;
    }
    
    return stoi(s);
}