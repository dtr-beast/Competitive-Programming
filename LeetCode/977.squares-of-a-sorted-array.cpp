/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */
// TODO: Learn about monotonic stack
// @lc code=start
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int len = nums.size();
        vector<int> v(len);

        int n;
        stack<int> sol, temp;

        for (int i = 0; i < len; i++)
        {
            n = nums[i] * nums[i];
            while ((!temp.empty()) && (temp.top() < n))
            {
                sol.push(temp.top());
                temp.pop();
            }
            temp.push(n);
        }
        while (!temp.empty())
        {
            sol.push(temp.top());
            temp.pop();
        }

        for (int i = v.size() - 1; i >= 0; i--)
        {
            v[i] = sol.top();
            sol.pop();
        }

        return v;
    }
};
// @lc code=end
