class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        count = {}
        left = 0
        max_freq = 0
        max_length = 0

        for right in range(len(s)):
            c = s[right]
            count[c] = count.get(c, 0) + 1

            max_freq = max(max_freq, count[c])

            window_length = right - left + 1
            if window_length - max_freq > k:
                count[s[left]] -= 1
                left += 1
            
            max_length = max(max_length, right - left + 1)
        return max_length