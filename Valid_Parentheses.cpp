class Solution {
public:
    bool isMatch(char c1, char c2){
        if(c1 == '(' && c2 == ')') return true;
        if(c1 == '[' && c2 == ']') return true;
        if(c1 == '{' && c2 == '}') return true;
        return false;
    }
    bool isValid(string s) {
        int top=-1;

        for(int i=0; i<s.length(); ++i){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{' )
            s[++top] = s[i];

            else if(s[i]==')' or s[i]==']' or s[i]=='}'){
                if((top>-1 and isMatch(s[top], s[i])))
                top--;
                else
                return 0;
            }
        }
        return top == -1;
    }
};
