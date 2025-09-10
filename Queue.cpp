#include <iostream>
#include <queue>
#include <deque>
using namespace std;

// QUEUE Using LINKED LIST
/*class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = tail = NULL;
    }

    void push(int data)
    { // Insert data at tail
        Node *newNode = new Node(data);

        if (empty())
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop()
    {
        if (empty())
        {
            cout << "LL is Empty";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    int front()
    {
        if (empty())
        {
            cout << "LL is Empty";
            return -1;
        }
        return head->data;
    }

    bool empty()
    {
        return head == NULL;
    }
};
*/

// QUEUE Using C++ STL

/*int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;
    return 0;
}
*/

// DEQUE - Double Ended Queue
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(3);
    dq.push_back(2);

    dq.push_front(5);
    dq.pop_back();
    cout << dq.front() << " " << dq.back() << endl;
}
