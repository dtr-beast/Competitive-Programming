#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    cout << 1 << "\n";
    if (n <= 1)
        return 0;

    cout << "1 1\n";
    vector<int> num(2, 1);

    for (int i = 2; i < n; i++)
    {
        vector<int> nextNum;
        int c = 1;
        int j;
        for (j = 1; j < num.size(); j++)
        {
            if (num[j - 1] == num[j])
                c++;
            else
            {
                nextNum.push_back(c);
                nextNum.push_back(num[j - 1]);
                cout << c << " " << num[j - 1] << " ";
                c = 1;
            }
        }
        nextNum.push_back(c);
        nextNum.push_back(num[j - 1]);
        cout << c << " " << num[j - 1];
        cout << "\n";
        num = nextNum;
    }
    return 0;
}
