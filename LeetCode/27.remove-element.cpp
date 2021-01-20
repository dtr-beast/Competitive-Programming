/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    void deleteElement(vector<int>& v, int index)
    {
        for (int i = index; i < v.size() - 1; i++)
        {
            v[i] = v[i + 1];
        }
    }
    int removeElement(vector<int>& nums, int val) 
    {
        int len = nums.size();
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] == val)
            {
                deleteElement(nums, i);
                len--;
            }
        }
        return len;
    }
};
// @lc code=end

