// Body Mass Index
// https://www.codechef.com/CCRC21C/problems/BMI
// DIV3 FEBRUARY CHALLENGE
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
	fastio

	int t;
    cin >> t;

    while (t--)
    {
        double w, h;
        cin >> w >> h;

        double bmi = w / (h * h);

        if (bmi <= 18)
        {
            cout << "1\n";
        }
        else if (bmi <= 24)
        {
            cout << "2\n";
        }
        else if (bmi <= 29)
        {
            cout << "3\n";
        }
        else
        {
            cout << "4\n";
        }
    }
    

	return 0;
}