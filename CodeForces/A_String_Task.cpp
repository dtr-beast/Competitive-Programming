// https://codeforces.com/problemset/problem/118/A
// String Task
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

    string s1;
    cin >> s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == 'a' || s1[i] == 'o' || s1[i] == 'y' || s1[i] == 'e' || s1[i] == 'u' || s1[i] == 'i')
        {
            continue;
        }
        else
        {
            cout << '.' << s1[i];
        }
    }
    return 0;
}