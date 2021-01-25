/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */
// @lc code=start
class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &A)
    {
        int len = A.size();

        int slow = 0;
        for (int i = 0, j = len - 1; j > i;)
        {
            if ((A[i] & 1) && !(A[j] & 1))
            {
                swap(A[i], A[j]);
            }
            else if ((A[j] & 1))
            {
                j--;
            }
            else if (!(A[i] & 1))
            {
                i++;
            }
            else
            {
                i++, j--;
            }
        }
        return A;
    }
};
// @lc code=end
