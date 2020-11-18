// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/rest-in-peace-21-1/
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

    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        cin >> s1;
        int a = stoi(s1);

        bool streak = true;
        if (a % 21 == 0)
        {
            cout << "The streak is broken!\n";
            streak = false;
        }
        else
        {
            for (int i = 0; i < s1.length() - 1; i++)
            {
                if (s1[i] == '2' && s1[i + 1] == '1')   // If pattern matches
                {
                    cout << "The streak is broken!\n";
                    streak = false;
                    break;
                }
            }
        }
        if (streak)
        {
            cout << "The streak lives still in our heart!\n";
        }
    }
    return 0;
}