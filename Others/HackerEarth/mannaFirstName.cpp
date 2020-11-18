// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/mannas-first-name-4/
// Linear Search
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl << "\n";

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

    int t, suvo, suvojit, c, count;
    string s1, s2 = "SUVOJIT";
    cin >> t;
    while (t--)
    {
        suvo = suvojit = 0;
        cin >> s1;
        for (int i = 0; i <= s1.length(); i++)
        {
            count = 0;
            for (int k = 0; k + i < s1.length(); k++)
            {
                if (s1[i + k] == s2[k])
                {
                    count++;
                }
            }
            if (count >= 7)
            {
                suvojit++;
            }
            else if (count >= 4)
            {
                suvo++;
            }
        }
        cout << "SUVO = " << suvo << ", SUVOJIT = " << suvojit endl   
    }
    return 0;
}