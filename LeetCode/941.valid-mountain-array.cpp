/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */

// @lc code=start
class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int len = arr.size();
        if (len < 3)
        {
            return false;
        }
        for (int i = 0, j = len - 1; j >= i; i++, j--)
        {
            if (arr[i] < arr[i + 1] || arr[j] < arr[j - 1])
            {
                if (i == j - 1)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end
