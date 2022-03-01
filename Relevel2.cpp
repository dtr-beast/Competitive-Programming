#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int fruits = 0;
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    if (n == 1)
    {
        cout << ans[0] << "  0";
        return 0;
    }
    sort(ans.begin(), ans.end());
    int p1 = max(ans[0], ans[1]), p2 = min(ans[0], ans[1]);

    for (int i = 2; i < n; i++)
    {
        if (p2 < p1)
        {
            p2 += ans[i];
        }
        else
        {
            p1 += ans[i];
        }
    }
    cout << p1 << " " << p2;
    // cout << (fruits / 2) + (fruits % 2 == 0 ? 0 : 1) << " " << (fruits / 2);

    return 0;
}

/*
QUESTION

Sharing Fruits

Problem Statement :

There are N fruit baskets. The number of fruits in each basket is given in an array A.
You have to distribute these N fruit baskets amongst 2 people so that the total number of fruits are distributed as evenly as possible (i.e. the absolute difference between the total number of fruits each person gets is minimum).
Your task is to find the number of fruits person 1 and person 2 gets. In case it is not possible to give an equal number of fruits to both people, give the excess to person 1. See sample input and output for more clarification.

Constraints :

1 ≤ N ≤ 100
1 ≤ A[i] ≤ 100




Input Format :



First line contains N.
Second line contains N space separated integers of the array A.

Output Format  :

Print 2 space separated integers, the number of fruits given to person 1 and person 2 respectively.

Sample Input :

5

1 2 3 4 5

Sample Output :

8 7

Explanation of Sample :

The total sum is 1+2+3+4+5 = 15. So it cannot be split into equal parts. However, the following distribution minimizes the difference between them.
Person 1 : { 1, 3, 4 } Total 8 Person 2 : { 2, 5 } Total 7

*/