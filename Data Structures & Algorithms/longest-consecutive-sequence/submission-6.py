class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        unique_nums = sorted(set(nums))

        count = 0
        max_count = 0

        for i in range(len(unique_nums)):
            if i > 0 and unique_nums[i] == unique_nums[i - 1] + 1:
                count += 1
            else:
                count = 1

            max_count = max(max_count, count)

        return max_count