class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
                stk.push(stoi(tokens[i]));
            else if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                int b = stk.top();
                stk.pop();
                int a = stk.top();
                stk.pop();
                int r;
                if (tokens[i] == "+") {
                    r = a + b;
                } else if (tokens[i] == "-") {
                    r = a - b;
                } else if (tokens[i] == "*") {
                    r = a * b;
                } else if (tokens[i] == "/") {
                    r = a / b;
                }
                stk.push(r);
            }
        }
        return stk.top();
    }
};
