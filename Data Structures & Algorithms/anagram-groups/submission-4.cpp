class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> maps;

        for (int i = 0; i < strs.size(); i++) {
            int count[26] = {0};
            for (int j = 0; j < strs[i].size(); j++) {
                count[strs[i][j] - 'a']++;
            }
            string key;
            for (int k = 0; k < 26; k++) {
                key += to_string(count[k]) + ",";
            }
            maps[key].push_back(strs[i]);
        }

        vector<vector<string>> result;
        result.reserve(maps.size());
        for (auto& pair : maps) {
            result.push_back(pair.second);
        }
        return result;
    }
};
