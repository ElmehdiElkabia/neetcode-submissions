class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int best = 0;

        while (left < right) {
            int width = right - left;
            int water = min(heights[left], heights[right]) * width;
            best = max(best, water);
            if (heights[left] < heights[right])
                left++;
            else
                right--;
        }
        return best;
    }
};
