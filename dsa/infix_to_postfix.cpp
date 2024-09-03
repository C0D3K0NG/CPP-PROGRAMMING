#include<iostream>
using namespace std;
#define n 200
char arr[n];
int top = -1;

void push(char c) {
    if (top == n - 1) {  // Fixed comparison
        cout << "Stack overloaded" << endl;
        return;
    }
    arr[++top] = c;
}

void pop() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    top--;
}

void display() {
    for (int i = 0; i <= top; i++)
        cout << arr[i] << endl;  // Fixed display
}

// infix to postfix functions
bool charchk(char c) {
    return (c == '+' || c == '-' || c == '/' || c == '*');
}

int precedence(char c) {
    if (c == '+' || c == '-')
        return 1;
    else if (c == '/' || c == '*')
        return 2;
    else
        return 0;
}

string infixToPostfix(string infix) {
    string postfix = "";
    if (infix == "") {
        cout << "No expression given" << endl;
        return "";
    }
    for (int i = 0; i < infix.size(); i++) {
        char ch = infix[i];
        if (ch == '(') {
            push('(');
        }
        else if (charchk(ch)) {
            while (top != -1 && precedence(arr[top]) > precedence(ch)) {  // Fixed precedence check
                postfix += arr[top];
                pop();
            }
            push(ch);
        }
        else if (isalnum(ch)) {
            postfix += ch;
        }
        else if (ch == ')') {  // Added handling for ')'
            while (arr[top] != '(') {
                postfix += arr[top];
                pop();
            }
            pop();  // Pop the '('.
        }
    }
    while (top != -1) {  // Added this block to handle remaining operators
        postfix += arr[top];
        pop();
    }
    return postfix;
}

// driver code
int main() {
    string infix;
    cout << "Enter an infix expression to change it into postfix expression: ";
    cin >> infix;
    string postfix = infixToPostfix(infix);
    cout << "\nThe postfix expression for this infix expression is: " << postfix;
    return 0;
}
