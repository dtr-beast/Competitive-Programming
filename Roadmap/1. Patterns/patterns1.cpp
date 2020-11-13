// https://www.faceprep.in/c/pattern-programs-in-c/
#include <bits/stdc++.h>
#define endl << "\n";
using namespace std;

void hollowRect(int, int);
void hollowInvHalfPyramid(int);
void hollowFullPyramid(int);

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
        // hollowRect(10, 10);
        // hollowInvHalfPyramid(10);
        hollowFullPyramid(6);

        return 0;
}

/*
            * * * * * 
            *       * 
            * * * * * 
*/
void hollowRect(int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j == 0 || j == c - 1 || i == 0 || i == r - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout endl
    }
}
/* 
            * * * * * * 
            *       *  
            *     *    
            *   *      
            * *        
            *           
*/
void hollowInvHalfPyramid(int l)
{
    for (int i = 0, k = l - i - 1; i < l; i++, k--)
    {
        for (int j = 0; j < l; j++)
        {
            if (i == 0 || j == 0)
            {
                cout << "* ";
            }
            else if (j == k)
            {
                cout << "*";
                break;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
}

void hollowFullPyramid(int s)
{
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}