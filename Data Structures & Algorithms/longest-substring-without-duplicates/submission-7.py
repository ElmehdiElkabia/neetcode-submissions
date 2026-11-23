class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l = 0
        res = 0
        see = {}
        for r, c in enumerate(s):
            if c in see:
                l = max(l, see[c] + 1)
            see[c] = r
            res = max(res, r - l + 1)
        return res