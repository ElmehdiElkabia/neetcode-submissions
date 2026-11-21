class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        l = len(nums)
        result = [1] * l

        prefix = 1
        for i in range(l):
            result[i] = prefix
            prefix *= nums[i]

        suffix = 1
        for i in range(l - 1, -1, -1):
            result[i] *= suffix
            suffix *= nums[i]

        return result