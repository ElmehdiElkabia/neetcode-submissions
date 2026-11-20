class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        group = {}
        n = len(strs)
        for i in range(n):
            key = "".join(sorted(strs[i]))
            if key not in group:
                group[key] = []
            group[key].append(strs[i])
        return list(group.values())