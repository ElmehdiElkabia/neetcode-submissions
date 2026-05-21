class MinStack {
   public:
    stack<int> stc;
    MinStack() {}

    void push(int val) { stc.push(val); }

    void pop() { stc.pop(); }

    int top() { return stc.top(); }

    int getMin() {
        stack<int> tmp;
        int mini = stc.top();
        while (stc.size()) {
            mini = min(mini, stc.top());
            tmp.push(stc.top());
            stc.pop();
        }

        while (tmp.size()) {
            stc.push(tmp.top());
            tmp.pop();
        }
        return mini;
    }
};
