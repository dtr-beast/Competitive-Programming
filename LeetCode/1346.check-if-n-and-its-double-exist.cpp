/*
 * @lc app=leetcode id=1346 lang=cpp
 *
 * [1346] Check If N and Its Double Exist
 */

// @lc code=start
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                if ((arr[i] == arr[j] * 2) || (arr[j] == arr[i] * 2))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
// @lc code=end

