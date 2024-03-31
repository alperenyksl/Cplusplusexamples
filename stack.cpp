#include <iostream>
#include <stack>
#include <cstdlib>

using namespace std;

template <typename T>
T second(const stack<T>& s) {
    stack<T> tmpStack = s;
    cout << "Stack size: " << s.size() << endl;
    if (s.size() < 2) {
        cout << "Underflow error: Not enough elements in the stack." << endl;
        exit(EXIT_FAILURE);
    }
    tmpStack.pop();
    cout << "Control: " << tmpStack.top() << endl;
    return tmpStack.top();
}

template <typename T>
void n2top(stack<T>& s, int n) {
    stack<T> tmpStack1, tmpStack2;
    for (int i = 1; i < n; ++i) {
        tmpStack1.push(s.top());
        s.pop();
    }
    tmpStack2.push(s.top());
    s.pop();
    while (!tmpStack1.empty()) {
        s.push(tmpStack1.top());
        tmpStack1.pop();
    }
    s.push(tmpStack2.top());
    while (!s.empty()) {
        tmpStack1.push(s.top());
        s.pop();
    }
    cout << "\nNew arrangement of the stack: ";
    while (!tmpStack1.empty()) {
        cout << tmpStack1.top() << " ";
        tmpStack1.pop();
    }
}

int main() {
    int arr[] = {1, 3, 5, 7};
    int arrsize = sizeof(arr) / sizeof(int);
    int n, secondElement;
    stack<int> stack1;
    for (size_t i = 0; i < arrsize; i++)
        stack1.push(arr[i]);
    const stack<int> stack2 = stack1;
    secondElement = second(stack2);
    cout << "Second element on the stack: " << secondElement;
    cout << "\nWhich element's position to change ( ";
    for (int i = 0; i < arrsize; i++)
        cout << arr[i] << " ";
    cout << ") from the end?: ";
    cin >> n;
    n2top(stack1, n);
    return 0;
}

