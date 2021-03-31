// https://codeforces.com/problemset/problem/141/A
// Amusing Joke
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
 
	string s1, s2, s3;
 
    cin >> s1 >> s2 >> s3;
    for (int i = 0; i < s1.length(); i++)
    {
        char c = s1[i];
        if (s3.find(c) != string::npos)
        {
            s3.erase(s3.find(c), 1);
            s1.erase(i, 1);
            i--;
        }
    }
    for (int i = 0; i < s2.length(); i++)
    {
        char c = s2[i];
        if (s3.find(c) != string::npos)
        {
            s3.erase(s3.find(c), 1);
            s2.erase(i, 1);
            i--;
        }
    }
 
    if (s1.length() == 0 && s2.length() == 0 && s3.length() == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
 
	return 0;
}