class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // Key = array<int,26> بدل string
        map<array<int,26>, vector<string>> maps;

        for (int i = 0; i < strs.size(); i++) {

            // 1️⃣ أنشئ array وصفّرها
            array<int,26> count = {0};

            // 2️⃣ عدّ الحروف
            for (char c : strs[i]) {
                count[c - 'a']++;
            }

            // 3️⃣ استخدم الـ array مباشرة كـ key (بدون تحويل)
            maps[count].push_back(strs[i]);
        }

        vector<vector<string>> result;
        result.reserve(maps.size());

        for (auto& pair : maps) {
            result.push_back(move(pair.second));
        }

        return result;
    }
};