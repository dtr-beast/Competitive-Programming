// https://codeforces.com/problemset/problem/451/B
// Sort the Array
// TODO: Implement
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
    fastio

        int n;
    cin >> n;
    vector<int> v1(n), v2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        v2[i] = v1[i];
    }
    sort(v2.begin(), v2.end());

    int fSegment = 0, fStart = 0;
    int sSegment = 0, sStart = 0;

    bool fFound = false;
    bool sFound = false;

    int i = 0;
    for (; i < n; i++)
    {
        if (v1[i] != v2[i])
        {
            if (!fFound)
            {
                fFound = true;
                fStart = i;
            }
            fSegment++;
        }
        else
        {
            i++; // skip
            break;
        }
    }

    for (; i < n; i++)
    {
        if (v1[i] != v2[i])
        {
            if (!sFound)
            {
                sFound = true;
                sStart = i;
            }
            sSegment++;
        }
    }

    if (fSegment == sSegment)
    {
        cout << "yes\n";
        if (sSegment != 0)
        {
            for (int i = fStart; i < fSegment + fStart; i++)
            {
                cout << v2[i] << " ";
            }
            for (int i = sStart; i < sSegment + sStart; i++)
            {
                cout << v2[i] << " ";
            }
        }
        else
        {
            
        }
        
    }
    else
    {
        cout << "no";
    }
    return 0;
}