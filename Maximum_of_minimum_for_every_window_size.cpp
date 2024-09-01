class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        // Your code here
        vector<int> left(n + 1, -1);
        vector<int> right(n + 1, n);
    
        // Stack to find previous and next smaller
        stack<int> s;
    
        // Fill elements of left[]
        for (int i = 0; i < n; i++) {
            while (!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            if (!s.empty())
                left[i] = s.top();
            s.push(i);
        }
    
        // Clear the stack for the next smaller element calculation
        while (!s.empty())
            s.pop();
    
        // Fill elements of right[]
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            if (!s.empty())
                right[i] = s.top();
            s.push(i);
        }
    
        // Array to store the maximum of minimums for every window size
        vector<int> ans(n + 1, 0);
    
        // Compute the answer for each element
        for (int i = 0; i < n; i++) {
            int len = right[i] - left[i] - 1;
            ans[len] = max(ans[len], arr[i]);
        }
    
        // Fill the remaining entries
        for (int i = n - 1; i >= 1; i--)
            ans[i] = max(ans[i], ans[i + 1]);
    
        // Result for sizes 1 to n
        vector<int> result(n);
        for (int i = 1; i <= n; i++)
            result[i - 1] = ans[i];
    
        return result;
    }
};
