#include <bits/stdc++.h>
using namespace std;
#define int long long
bool sort_func(vector<int> a1, vector<int> a2)
{
    if (a1[0] < a2[0])
        return true;

    if (a1[0] == a2[0])
        return a1[1] < a2[1];
    return false;
}

signed main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    vector<int> ans(n, 1);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
        a[i][2] = i;
    }

    sort(a.begin(), a.end(), sort_func);

    int min_leave = a[0][1];
    int max_table = 1;
    int table = 1;

    for (int i = 0; i < n; i++)
    {
        cout << a[i][0] << " " << a[i][1] << "\n";
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i][0] >= min_leave)
        {
            ans[a[i][2]] = min_leave;
            min_leave = a[i][1];
        }
        // Guest arrived before another leaving
        if (a[i][0] < a[i - 1][1])
        {
            table++;
        }
        else if (a[i][0] > a[i - 1][1])
        {
            table--;
        }
        ans[a[i][2]] = table;
        max_table = max(max_table, table);
    }

    cout << max_table << "\n";

    for (int ele : ans)
    {
        cout << ele << "\n";
    }

    return 0;
}

/*
QUESTION -
Table Number

Problem Statement :


Assume you are the owner of a restaurant. Today, N guests are going to visit your restaurant. You need to assign them a table as soon as they arrive.
You are given with the visiting time and leaving time of N guests in seconds.
For example if visiting time is 10, this means the guest would come at 10th second after the restaurant is open.
You can assign a single table to another guest if the table becomes free. A table is free as soon as the guest who was assigned the particular table leaves. For example, if one guest leaves at 10th second, another guest can be assigned the same table if he comes at 10th second.


Also there is a rule:

All the tables will be numbered, suppose from 1 to K. When a guest arrives, you need to assign the table having least number.

For example:
If a guest arrives and table 2, 4 and 6 are empty, he would get table 2.

Note: Initially all the tables are empty.
You need to find the minimum number of tables that you should keep such that no guest has to wait.
Also, for each guest, state the table number he was assigned.

Constraints :

1 ≤ N ≤ 10^5
1 ≤ arrival time < leaving time ≤ 10^9
All arriving times would be pairwise distinct.


Input Format :

First line contains two integers N.
Next N lines contains two integers A and L denoting arrival time and leaving time of the ith guest.

Output Format :

First line with an integer denoting the minimum number of tables required.
Next N lines would contain an integer each, denoting the table number the ith guest would be assigned.

Sample Input :

3
1 4
4 6
2 3

Sample Output :

2
1
1
2

Explanation of Sample :


At t = 1, 1st guest arrives. He would get table number 1.
At t = 2, 3rd guest arrives. He would get table number 2.
At t = 3, 3rd guest leaves. Table number 2 becomes free.
At t = 4, 1st guest leaves. Table number 1 becomes free.
At t = 4, 2nd guest arrives. He would get table number 1.
At t = 6, 2nd guest leaves. All table are free.


Hence, only 2 tables are required.
Guest-1 gets table number 1.
Guest-2 gets table number 1.
Guest-3 gets table number 2.
*/