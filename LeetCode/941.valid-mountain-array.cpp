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
        int i;

        for(i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] >= arr[i + 1])
            {
                break;
            }
        }
        if (i == 0 || i == arr.size() - 1)
        {
            return false;
        }
        for (; i < arr.size() - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
            {
                break;
            }
        }
        return (i == arr.size() - 1);
    }
};
// @lc code=end
