class MinStack {
public:
    vector<int> minStack;
    MinStack() {

    }

    void push(int val) {
        minStack.push_back(val);
    }

    void pop() {
        minStack.pop_back();
    }

    int top() {
        return minStack[minStack.size()-1];
    }

    int getMin() {
        return *min_element(minStack.begin(),minStack.end());
    }
};
