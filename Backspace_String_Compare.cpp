class Solution {
public:
    string processString(const string& str) {
        string result;
        for (char ch : str) {
            if (ch != '#') {
                result.push_back(ch);
            } else if (!result.empty()) {
                result.pop_back();
            }
        }
        return result;
    }
    
    bool backspaceCompare(string s, string t) {
        return processString(s) == processString(t);
    }
};
