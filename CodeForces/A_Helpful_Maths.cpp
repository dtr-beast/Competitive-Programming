// https://codeforces.com/problemset/problem/339/A
// Helpful Maths
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

    string str1;
    cin >> str1;
    sort(str1.begin(), str1.end());
    str1.erase(str1.begin(), str1.begin() + str1.rfind('+') + 1);
    int len;
    for (int i = 0; i < (len = str1.length()) - 1; i++)
    {
        cout << str1[i] << '+';
    }
    cout << str1[len - 1];
    return 0;
}