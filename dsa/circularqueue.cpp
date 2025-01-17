#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *queue;
    int front, rear;
    int maxSize;

public:
    // Constructor to initialize queue
    CircularQueue(int size) {
        maxSize = size;
        queue = new int[maxSize];
        front = -1;
        rear = -1;
    }

    // Method to check if the queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Method to check if the queue is full
    bool isFull() {
        return (rear + 1) % maxSize == front;
    }

    // Method to add an element to the queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full! Cannot enqueue " << value << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % maxSize;
        queue[rear] = value;
        cout << "Enqueued: " << value << endl;
    }

    // Method to remove an element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty! Cannot dequeue." << endl;
            return;
        }
        cout << "Dequeued: " << queue[front] << endl;
        if (front == rear) { // Only one element was present
            front = rear = -1;
        } else {
            front = (front + 1) % maxSize;
        }
    }

    // Method to get the front element
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty! Nothing to peek." << endl;
            return -1;
        }
        return queue[front];
    }

    // Method to display the queue
    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        int i = front;
        cout << "Queue: ";
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % maxSize;
        }
        cout << endl;
    }

    // Destructor to free allocated memory
    ~CircularQueue() {
        delete[] queue;
    }
};

int main() {
    CircularQueue q(5); // Queue of size 5
    while (true) {
        cout << "\n\n1. Push a number to the queue"
             << "\n2. Pop from the queue"
             << "\n3. Peek the front number of the queue"
             << "\n4. Display the queue"
             << "\n5. Close the program"
             << "\nChoose what you want to do: ";
        
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                int num;
                cout << "Enter a number to push to the queue: ";
                cin >> num;
                q.enqueue(num);
                break;
            }
            case 2:
                q.dequeue();
                break;
            case 3: {
                int frontValue = q.peek();
                if (frontValue != -1) {
                    cout << "Front element: " << frontValue << endl;
                }
                break;
            }
            case 4:
                q.displayQueue();
                break;
            case 5:
                cout << "Program closed." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
