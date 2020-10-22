#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long t, strlength;
    cin >> t;
    while (t--)
    {
        cin >> strlength;
        int found = 0;
        string S;
        getline(cin, S);
        for (int i = 0; i < strlength - 1; i++)
        {
            if (S[i] == S[strlength - 1])
            {
                cout << "YES\n";
                found = 1;
                break;
            }
        }
        if (!found)
        {
            cout << "NO\n";
        }
    }
    return 0;
}