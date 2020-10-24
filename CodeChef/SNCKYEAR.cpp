// https://www.codechef.com/problems/SNCKYEAR
#include <bits/stdc++.h>
using namespace std;

int main()
#define int long long
{
#ifndef ONLINE_JUDGE
	freopen("1input.txt", "r", stdin);
	freopen("1output.txt", "w", stdout);
#endif

    int t, year, snck_year[] = {2010, 2015, 2016, 2017, 2019};
    cin >> t;
    while (t--)
    {
        bool f = false;
        cin >> year;
        for (int syear: snck_year)
        {
            if (year == syear)
            {
                cout << "HOSTED\n";
                f = true;
                break;
            }
        }
        if (!f)
        {
            cout << "NOT HOSTED\n";
        }
    }
	return 0;
}