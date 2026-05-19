class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int r = 0;
        int max_r = 0;
        for (int i = 0; i < nums.size() ;i++)
        {
            if (nums[i] == 1)
            {
                r++;
                max_r = max(max_r, r);
            }
            else
                r = 0;
        }
        return max_r;
    }
};