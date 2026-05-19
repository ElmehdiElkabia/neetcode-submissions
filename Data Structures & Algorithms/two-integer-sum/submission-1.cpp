class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r;

        for(int i = 0;i < nums.size() ;++i)
        {
            int j = i + 1;
            while (j < nums.size())
            {
                if (nums[j] + nums[i] == target)
                {
                    r.push_back(i);
                    r.push_back(j);
                    return r;
                }
                j++;
            }
        }
        if (r.empty())
            r.push_back(0);
        return r;
    }
};
