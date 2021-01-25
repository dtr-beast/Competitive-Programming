/*
 * @lc app=leetcode id=1299 lang=cpp
 *
 * [1299] Replace Elements with Greatest Element on Right Side
 */

// @lc code=start
class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int len = arr.size();

        vector<int> max_from_back(len);

        int maxi = arr.back();
        // Make a "max till now" array from the back of the vector
        for (int i = len - 1; i >= 0; i--)
        {
            if (maxi < arr[i])
            {
                maxi = arr[i];
            }

            max_from_back[i] = maxi;
        }

        // Assign the values accordingly
        for (int i = 0; i < len - 1; i++)
        {
            arr[i] = max_from_back[i + 1];
        }
        arr.back() = -1;

        return arr;
    }
};
// @lc code=end
