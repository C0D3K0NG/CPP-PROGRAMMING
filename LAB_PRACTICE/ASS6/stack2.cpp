/*P4.Implement stack where each stack object deals with different array size as per user’s given size.*/
#include <iostream>
using namespace std;

template <class T>
class Stack {
private:
    T* arr;        // dynamically allocated array
    int top;
    int capacity;

public:
    // Constructor with user-defined size
    Stack(int size) {
        capacity = size;
        arr = new T[capacity];
        top = -1;
    }

    // Destructor to free memory
    ~Stack() {
        delete[] arr;
    }

    // Push operation
    void push(T value) {
        if (top >= capacity - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed into the stack." << endl;
        }
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << arr[top--] << " popped from the stack." << endl;
        }
    }

    // Display stack contents
    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Main function to demonstrate usage
int main() {
    int size1, size2;

    cout << "Enter size for Stack 1: ";
    cin >> size1;
    Stack<int> s1(size1);

    cout << "Enter size for Stack 2: ";
    cin >> size2;
    Stack<int> s2(size2);

    // Stack 1 operations
    s1.push(10);
    s1.push(20);
    s1.display();
    s1.pop();
    s1.display();

    // Stack 2 operations
    s2.push(100);
    s2.display();

    return 0;
}
