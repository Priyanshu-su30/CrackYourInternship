class Solution {
public:
    int calculate(string s) {
        stack<int> numbers;
        int currentNumber = 0;
        char operation = '+'; 
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            char currentChar = s[i];

            if (isdigit(currentChar)) {
                currentNumber = currentNumber * 10 + (currentChar - '0');
            }

            if ((!isdigit(currentChar) && currentChar != ' ') || i == n - 1) {
                if (operation == '+') {
                    numbers.push(currentNumber);
                } else if (operation == '-') {
                    numbers.push(-currentNumber);
                } else if (operation == '*') {
                    int top = numbers.top();
                    numbers.pop();
                    numbers.push(top * currentNumber);
                } else if (operation == '/') {
                    int top = numbers.top();
                    numbers.pop();
                    numbers.push(top / currentNumber);
                }

                operation = currentChar; 
                currentNumber = 0;       
            }
        }

        int result = 0;
        while (!numbers.empty()) {
            result += numbers.top();
            numbers.pop();
        }

        return result;
    }
};
