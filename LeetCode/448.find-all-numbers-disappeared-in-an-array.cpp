/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */
// @lc code=start
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int len = nums.size();

        // For a given number in the array, go to the equivalent index in the array,
        // and negate the number present there to "remember" that the number has been found there.  
        for (int i = 0; i < len; i++)
        {
            int ele = abs(nums[i]);
            nums[ele - 1] = -abs(nums[ele - 1]);
        }

        vector <int> v;
        for (int i = 0; i < len; i++)
        {
            if (nums[i] > 0)
            {
                v.push_back(i + 1);
            }
        }
        return v;
    }
};
// @lc code=end
