// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/maximum-occurrence-9/
// Maximum occurrence
// Hashing (Basic)
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
    
    // This task can also be achieved in a single for loop
    string s1;
    getline(cin, s1);
    short arr[256] = {};    // Initializes array with Zeroes, used short data type to save memory
    // Calculate frequency
    for (int i = 0; i < s1.size(); i++)
    {
        int x = s1[i];
        arr[x]++;
    }
    int max = -1, index;
    // Find the maximum frequency
    for (int i = 0; i < 256; i++)
    {
        if (max < arr[i])
        {
            index = i;
            max = arr[i];
        }
    }
    cout << (char) index << " " << max; 

    return 0;
}