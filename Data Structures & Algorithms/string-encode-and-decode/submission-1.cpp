class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded_string;

        for (int i = 0; i < strs.size(); i++) {
            encoded_string += to_string(strs[i].size()) + "#" + strs[i];
        }
        return encoded_string;
    }

    // "Hello","World"
    // 5#Hello6#World

    vector<string> decode(string s) {
        vector<string> decoded_strs;

        int i = 0;
        while (i < s.size()) {
            int position = s.find("#", i);
            int length = stoi(s.substr(i, position - i));
            string word = s.substr(position + 1, length);
            decoded_strs.push_back(word);
            i = position + length + 1;
        }

        return decoded_strs;
    }
};
