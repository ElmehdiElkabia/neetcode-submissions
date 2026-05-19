class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        sort(nums.begin(), nums.end(), [&](int a, int b) { return count[a] > count[b]; });

        nums.resize(k);
        return nums;
    }
};
