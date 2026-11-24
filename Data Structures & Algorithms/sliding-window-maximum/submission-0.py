class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        result: list[int] = []
        q = deque()

        for start in range(len(nums)):
            while q and q[0] <= start - k:
                q.popleft()
            while q and nums[q[-1]] < nums[start]:
                q.pop()
            q.append(start)
            if start >= k - 1:
                result.append(nums[q[0]])
        return result