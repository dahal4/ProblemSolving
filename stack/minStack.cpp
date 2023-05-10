#include <iostream>
#include <stack>
using namespace std;

class MinStack {
public:
    stack<int> stackTracker;
    MinStack() {}
    
    void push(int val) {
        stackTracker.push(val);
    }
    
    void pop() {
        stackTracker.pop();
    }
    
    int top() {
        return stackTracker.top();
    }
    
    int getMin() {
        int min = stackTracker.top();
        stack<int> temp = stackTracker;
        while (!temp.empty()) {
            int pVal = temp.top();
            if (pVal < min) {
                min = pVal;
            }
            temp.pop();
        }
        return min;
    }
};