// https://codeforces.com/problemset/problem/208/A
// Dubstep
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

	string s1, s2, s3 = "";
	cin >> s1;
    //  Remove WUB
    for (int i = 0; i < s1.length();)
    {
        if (s1[i] == 'W' && s1[i + 1] == 'U' && s1[i + 2] == 'B')
        {
            s3 += " ";
            i += 3;
        }
        else
        {
            s3 += s1[i];
            i++;
        }
    }
    // Clean Spaces from the back of the string
    for (int i = s3.length() - 1; i >= 0; i--)
    {
        if (s3[i] != ' ')
        {
            break;
        }
        else
        {
            s3.erase(i);
        }
    }
    // Check if first letter is a space (" "), if it is.. skip then
    if (s3[0] != ' ')
    {
        cout << s3[0];
    }
    // Finally print it
    for (int i = 1; i < s3.length(); i++)
    {
        // If a space is found
        if (s3[i] == ' ')
        {
            // Make sure it is only one space in concurrence
            if (s3[i - 1] != ' ')
            {
                cout << s3[i];
            }
        }
        else
        {
            cout << s3[i];
        }
    }
    
	return 0;
}