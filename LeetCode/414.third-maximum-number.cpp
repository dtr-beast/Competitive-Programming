/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */
#include <bits/stdc++.h>
// @lc code=start
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        int len = nums.size();
        long long maxi1, maxi2, maxi3;
        maxi1 = maxi2 = maxi3 = INT64_MIN;

        for (int i = 0; i < len; i++)
        {
            if (nums[i] > maxi1)
            {
                maxi3 = maxi2;
                maxi2 = maxi1;
                maxi1 = nums[i];
            }
            // This condition is avoid taking similar values, only distinct values are considered
            else if (nums[i] > maxi2 && nums[i] != maxi1)
            {
                maxi3 = maxi2;
                maxi2 = nums[i];
            }
            else if (nums[i] > maxi3 && nums[i] != maxi2 && nums[i] != maxi1)
            {
                maxi3 = nums[i];
            }
        }
        if (maxi3 == INT64_MIN)
        {
            return maxi1;
        }
        return maxi3;
    }
};
// @lc code=end
