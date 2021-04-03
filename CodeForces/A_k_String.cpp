// https://codeforces.com/problemset/problem/219/A
// k-String
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

string repeat(string, char, int);

signed main()
{
	fastio

	int n;
    cin >> n;

    string str;
    cin >> str;

    map<char, int> m;
    
    // Count all the characters' frequency
    for (char c: str)
    {
        m[c]++;
    }
    string s1 = "";


    for (auto i = m.begin(); i != m.end(); i++)
    {
        // If the frequency is not proportional to the frequency needed
        if (i -> second % n != 0)
        {
            cout << -1;
            return 0;
        }
        
        // Keep making the k-string as well 
        s1 = repeat(s1, i->first, i -> second / n);
    }

    while(n--)
    {
        cout << s1;
    }

	return 0;
}

string repeat(string s, char c, int n)
{  
    for (int i = 0; i < n; i++)
    {
        s += c; 
    }
  
    return s;
}