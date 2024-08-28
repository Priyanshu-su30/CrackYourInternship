class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;       
        stack<string> stringStack; 
        int k = 0;                 

        for (char c : s) {
            if (isdigit(c)) {
                k = (k * 10) + (c - '0');
            } else if (c == '[') {
                numStack.push(k);
                k = 0;
                stringStack.push("[");
            } else if (c == ']') {
                string temp = "";
                while (!stringStack.empty() && stringStack.top() != "[") {
                    temp = stringStack.top() + temp;
                    stringStack.pop();
                }

                if (!stringStack.empty()) {
                    stringStack.pop();
                }

                int count = numStack.top();
                numStack.pop();
                string replacement = "";
                for (int i = 0; i < count; i++) {
                    replacement += temp;
                }

                stringStack.push(replacement);
            } else {
                stringStack.push(string(1, c));
            }
        }

        string result = "";
        while (!stringStack.empty()) {
            result = stringStack.top() + result;
            stringStack.pop();
        }

        return result;
    }
};
