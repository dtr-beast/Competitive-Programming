https://www.codechef.com/problems/DECINC
#include <bits/stdc++.h>
using namespace std;

int main()
#define int long long
{
#ifndef ONLINE_JUDGE
	freopen("1input.txt", "r", stdin);
	freopen("1output.txt", "w", stdout);
#endif
    int num;
    cin >> num;
    cout << ((num % 4 == 0) ? ++num : --num);
	return 0;
}