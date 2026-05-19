class Solution {
   public:
    bool isPalindrome(string s) {
        string r;
        int i = 0;
        while (i < s.size()) {
            if (isdigit(s[i]) || isalpha(s[i]))
                r.push_back(s[i]);
            i++;
        }
        for (auto& x : r) {
            x = tolower(x);
        }
        std::cout << r << std::endl;
        int left = 0;
        int right = r.length() - 1;
        while (left <= right) {
            if (r[left] != r[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
