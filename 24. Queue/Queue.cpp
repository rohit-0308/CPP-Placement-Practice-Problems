// Array Implementation

#include <iostream>
#define n 20

using namespace std;

class queue
{
    int *arr;
    int front, back;

public:
    queue()
    {
        arr = new int[n];
        back = -1;
        front = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;
        if (front == -1)
            front++;
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements" << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements" << endl;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.empty();

    return 0;
}