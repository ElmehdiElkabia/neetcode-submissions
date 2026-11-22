class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        result = [[]]
        for num in nums:
            new_subsets = []
            for j in result:
                new_subsets.append(j + [num])
            result.extend(new_subsets)
        return result