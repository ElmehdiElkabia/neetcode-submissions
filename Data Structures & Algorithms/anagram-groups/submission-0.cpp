class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> maps;

        vector<string> keys;
        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];
            sort(key.begin(), key.end());
            keys.push_back(key);
            maps[key].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for (int j = 0; j < keys.size(); j++) {
            if (find(result.begin(), result.end(), maps[keys[j]]) == result.end())
                result.push_back(maps[keys[j]]);
        }
        return result;
    }
};
