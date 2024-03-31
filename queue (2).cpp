#include <iostream>
#include <queue>

using namespace std;

template <typename T>
void cut(queue<T> &q, int n, const T& item) 
{
    if (n < 1 || n > q.size() + 1)
    {
        cout << "Invalid value of n. We cannot perform the operation." << endl;
        return;
    }

    queue<T> temp;

    // Move the first n-1 elements to temp
    for (int i = 1; i < n; ++i)
    {
        temp.push(q.front());
        q.pop();
    }

    // Insert the item at position n
    temp.push(item);

    // Move the remaining elements back to the original queue
    while (!q.empty()) 
    {
        temp.push(q.front());
        q.pop();
    }

    // Reassign temp to the original queue
    q = temp;
}

int main() 
{
    queue<int> myQueue;
    cout << "Enter five int values to enqueue into the queue:" << endl;
    for (int i = 0; i < 5; ++i)
    {
        int value;
        cin >> value;
        myQueue.push(value);
    }

    int n;
    int item;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of item: ";
    cin >> item;

    cut(myQueue, n, item);

    cout << "Queue after cut operation: ";
    while (!myQueue.empty()) 
    {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;

    return 0;
}

