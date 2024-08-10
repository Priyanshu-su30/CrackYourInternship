class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& strs) {
      
        unordered_map<string, vector<string>> anagramMap;

        for (const auto& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            anagramMap[sortedStr].push_back(str);
        }

        vector<vector<string>> result;
        for (const auto& pair : anagramMap) {
            result.push_back(pair.second);
        }

        return result;
    }
};
