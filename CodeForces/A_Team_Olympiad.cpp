// https://codeforces.com/problemset/problem/490/A
// Team Olympiad
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

    int n;
    cin >> n;

    int x;
    vector <int> one, two, three;
    for (int i = 1; i <= n; i++)
    {
        // Collect the indexes
        cin >> x;
        if (x == 1)
        {
            one.push_back(i);
        }
        else if (x == 2)
        {
            two.push_back(i);
        }
        else if (x == 3)
        {
            three.push_back(i);
        }
    }

    // Calculate the minimum number of complete trios that can be made
    int arr[] = {(int) one.size(), (int) two.size(), (int) three.size()};
    int mini = *min_element(arr, arr + 3);

    
    if (mini > 0)
    {
        // Make the trios
        vector <vector<int>> teams;
        for (int i = 0; i < mini; i++)
        {
            // v.push_back() does not return the last element
            teams.push_back({one.back(), two.back(), three.back()});
            one.pop_back();
            two.pop_back();
            three.pop_back();
        }
        
        cout << mini << endl;
        for (int i = 0; i < mini; i++)
        {
            cout << teams[i][0] << " " << teams[i][1] << " " << teams[i][2] << endl;
        }
    }
    else
    {
        cout << 0;
    }
    return 0;
}