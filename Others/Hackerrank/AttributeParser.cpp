// https://www.hackerrank.com/challenges/attribute-parser/problem
#include <bits/stdc++.h>
// #define int long long
using namespace std;

#undef int
int main()
#define int long long
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, q;
    cin >> n >> q;
    vector<string> hrml, query;
    string s;
    getline(cin, s);

    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        hrml.push_back(s);
    }

    for (int i = 0; i < q; i++)
    {
        getline(cin, s);

        int loc = s.find("~");
        string tag = s.substr(0, loc),
               att = s.substr(loc + 1, s.length());

        // if (tag.find(".") != -1)
        // {
        //     tag = tag.substr(tag.find(".") + 1, tag.length());
        // }
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            found = false;
            if (hrml[i].find(tag) != -1)
            {
                int c;

                if ((c = hrml[i].find(att[0])) != -1)
                {
                    int start = c + att.length() + 4,
                        end = hrml[i].find("\"", start) - start;
                    cout << hrml[i].substr(start, end) << "\n";
                    found = true;
                    break;
                }
            }
        }
        if (!found)
        {
            cout << "Not Found!\n";
        }
    }

    return 0;
}
