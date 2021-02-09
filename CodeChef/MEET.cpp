// https://www.codechef.com/FEB21C/problems/MEET
// Chef and Meetings
// FEB21C Long Challenge
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

int parseTime(string);
signed main()
{
    fastio

    int t;
    cin >> t;
    
    string s1, s2;
    getline(cin, s1);   // Clear int input

    while (t--)
    {
        getline(cin, s1);
        int meetingTime = parseTime(s1);

        int n;
        cin >> n;
        getline(cin, s2);   // Clear int input

        for (int i = 0; i < n; i++)
        {
            getline(cin, s2);

            cout << ((meetingTime >= parseTime(s2.substr(0, 8))) && (meetingTime <= parseTime(s2.substr(9))));
        }
        cout << endl;
    }

    return 0;
}

int parseTime(string strTime)
{
    int hour = stoi(strTime.substr(0, 2));
    int min = stoi(strTime.substr(3));

    if (strTime[6] == 'A')
    {
        if (hour == 12)
        {
            hour = 0;
        }
    }
    else
    {
        if (hour != 12)
        {
            hour += 12;
        }
    }
    int time = hour * 60 + min;

    return time;
}