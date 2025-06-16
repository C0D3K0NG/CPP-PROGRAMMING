#include <iostream>
using namespace std;

const int size = 100;

template <class T>
class queue {
    T queuearr[size];
    int front, rear;

public:
    queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(T a) {
        if (rear == size - 1) {
            cout << "Queue overflow!" << endl;
            return;
        }
        if (front == -1) front = 0;
        queuearr[++rear] = a;
        cout << a << " is enqueued into the queue" << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue underflow!" << endl;
            return;
        }
        cout << queuearr[front] << " is dequeued from the queue" << endl;
        front++;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queuearr[i] << " ";
        }
        cout << endl;
    }
};

// Test the queue with int type
int main() {
    queue<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();  // Underflow test

    return 0;
}
