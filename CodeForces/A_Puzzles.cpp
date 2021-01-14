// https://codeforces.com/problemset/problem/337/A
// Puzzles
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

// Can also be solved with static Arrays
signed main()
{
	fastio

	int s, p, c;
	cin >> s >> p;
    multiset <int> puzl;
    for (int i = 0; i < p; i++)
    {
        cin >> c;
        puzl.insert(c);
    }

    auto j = puzl.begin();

    // Set the iterator to the Sth position to take a whole range of  puzzle
    advance(j, s - 1); 
    
    int min = INT64_MAX;
    for (auto i = puzl.begin(); j != puzl.end(); i++, j++)
    {
        // Calculate Minimum
        if (min > *j - *i)
        {
            min = *j - *i;
        }
    }
    cout << min;
    
	return 0;
}