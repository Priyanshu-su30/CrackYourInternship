class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;

        for (const string& token : tokens) {
            if (token.size() > 1 || isdigit(token[0])) {
                stack.push(stoi(token));
            } else {
                int b = stack.top();
                stack.pop();
                int a = stack.top();
                stack.pop();
                switch (token[0]) {
                case '+':
                    stack.push(a + b);
                    break;
                case '-':
                    stack.push(a - b);
                    break;
                case '*':
                    stack.push(a * b);
                    break;
                case '/':
                    stack.push(a / b);
                    break;
                }
            }
        }

        return stack.top();
    }
};
