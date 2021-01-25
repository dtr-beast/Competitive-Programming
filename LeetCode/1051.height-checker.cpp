/*
 * @lc app=leetcode id=1051 lang=cpp
 *
 * [1051] Height Checker
 */

// @lc code=start
class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        int move = 0;
        int len = heights.size();

        vector<int> temp = heights;

        sort(temp.begin(), temp.end());

        for (int i = 0; i < len; i++)
        {
            if (heights[i] != temp[i])
            {
                move++;
            }
        }
        return move;
    }
};
// @lc code=end
