class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counts = Counter(nums)
        result: list[int] = []
        for number, count in counts.most_common(k):
            result.append(number)
        return result
