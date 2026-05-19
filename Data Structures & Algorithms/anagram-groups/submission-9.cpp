class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> maps;
        maps.reserve(strs.size());

        for (int i = 0; i < strs.size(); i++) {
            int count[26] = {0};

            for (char c : strs[i]) {
                count[c - 'a']++;
            }

            // ✅ بناء الـ key بطريقة سريعة جداً
            string key(52, 0);
            for (int k = 0; k < 26; k++) {
                key[k * 2]     = (char)(count[k]);  // الرقم مباشرة
                key[k * 2 + 1] = ',';               // فاصل
            }

            maps[key].push_back(strs[i]);
        }

        vector<vector<string>> result;
        result.reserve(maps.size());
        for (auto& pair : maps) {
            result.push_back(move(pair.second));
        }

        return result;
    }
};