class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
            vector<int> result;
            int textLength = text.length();
            int patternLength = pattern.length();
        
            for (int i = 0; i <= textLength - patternLength; ++i) {
                if (text.substr(i, patternLength) == pattern) {
                    result.push_back(i + 1);
                }
            }
        
            return result;
        }
     
};
