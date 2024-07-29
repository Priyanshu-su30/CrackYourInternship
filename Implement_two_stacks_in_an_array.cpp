class twoStacks {
  public:
    int *arr;
    int top1;
    int top2;
    int n;

    twoStacks() {
        arr = new int[n]; 
        top1 = n / 2 + 1; 
        top2 = n / 2; 
    }
        
    // Function to push an integer into the stack1.
    void push1(int x) {
        if (top1 > 0) { 
            top1--; 
            arr[top1] = x; 
        } 
        else { 
            cout << x << " "; 
            return; 
        } 
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        if (top2 < n - 1) { 
            top2++; 
            arr[top2] = x; 
        } 
        else { 
            cout << x << " "; 
            return; 
        }
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if (top1 <= n / 2) { 
            int x = arr[top1]; 
            top1++; 
            return x; 
        } 
        else { 
            exit(1); 
        } 
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        if (top2 >= n / 2 + 1) { 
            int x = arr[top2]; 
            top2--; 
            return x; 
        } 
        else { 
            exit(1); 
        } 
    }
};
