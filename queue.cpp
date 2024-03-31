#include <iostream>
#include <queue>

using namespace std;

template <typename T>
void n2front(queue<T> &q, int n) 
{
    if (n < 1 || n > q.size()) 
    {
        cout << "Invalid value of n. Cannot perform the operation." << endl;
        return;
    }
    queue<T> temp;
    for (int i = 1; i < n; ++i) 
    {
        temp.push(q.front());
        q.pop();
    }
    T zerothElement = q.front();
    q.pop();
    T nthElement = q.front();
    q.pop();
    q.push(zerothElement);
    temp.push(nthElement);
    while (!temp.empty()) 
    {
        q.push(temp.front());
        temp.pop();
    }
}

int main() 
{
    queue<int> myQueue;
    cout << "Enter five integer values to enqueue into the queue:" << endl;
    for (int i = 0; i < 5; ++i)
    {
        int value;
        cin >> value;
        myQueue.push(value);
    }
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    n2front(myQueue, n);
    cout << "Queue after n2front operation: ";
    while (!myQueue.empty())
    {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;
    return 0;
}

