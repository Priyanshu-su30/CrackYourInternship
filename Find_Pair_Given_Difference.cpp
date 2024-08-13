class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        unordered_set<int> elements;

        for (int i = 0; i < n; i++) {
            int num = arr[i];
    
            if (elements.find(num + x) != elements.end() || elements.find(num - x) != elements.end()) {
                return 1;
            }
    
            elements.insert(num);
        }
        return -1;
    }
};
