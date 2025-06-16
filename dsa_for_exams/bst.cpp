#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value) {
    if (!root)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = nullptr;
    int n, value;

    cout << "Enter the number of elements to insert: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> value;
        root = insert(root, value);
    }

    cout << "Inorder Traversal of the BST: ";
    inorder(root);
    cout << endl;

    return 0;
}
