class Solution {
public:
    bool isNumber(string s) {
        bool digitSeen = false, eSeen = false, dotSeen = false;
        int countPlusMinus = 0;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (isdigit(ch)) {
                digitSeen = true;
            }
            else if (ch == '+' || ch == '-') {
                if (countPlusMinus == 2) {
                    return false;
                }

                if (i > 0 && (s[i - 1] != 'e' && s[i - 1] != 'E')) {
                    return false;
                }

                if (i == s.length() - 1) {
                    return false;
                }

                countPlusMinus++;
            }

            else if (ch == '.') {
                if (eSeen || dotSeen) {
                    return false;
                }

                if (i == s.length() - 1 && !digitSeen) {
                    return false;
                }

                dotSeen = true;
            }
            else if (ch == 'e' || ch == 'E') {
                if (eSeen || !digitSeen || i == s.length() - 1) {
                    return false;
                }

                eSeen = true;
            } else {
                return false;
            }
        }

        return true;
    }
};
