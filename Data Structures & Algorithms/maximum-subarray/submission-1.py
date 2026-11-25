class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        result = current = nums[0]
        for i in range(1, len(nums)):
            if current < 0:
                current = 0
            current += nums[i]
            if current > result:
                result = current
        return result