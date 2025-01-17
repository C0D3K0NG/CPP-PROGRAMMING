#include <iostream>
using namespace std;

struct Treenode {
    int val;
    Treenode* left;
    Treenode* right;
};

// Helper function to build the tree
Treenode* buildtree(int arr[], int& index, int length) {
    if (index >= length || arr[index] == -1) {
        index++; // Move to the next element
        return nullptr;
    }
    Treenode* newNode = new Treenode();
    newNode->val = arr[index++];
    newNode->left = buildtree(arr, index, length);
    newNode->right = buildtree(arr, index, length);
    return newNode;
}

// Function to count the number of nodes in the tree
int nodeCount(Treenode* root) {
    if (root == nullptr)
        return 0;
    int leftnode = nodeCount(root->left);
    int rightnode = nodeCount(root->right);
    return (leftnode + rightnode + 1);
}

int sumNode(Treenode* root){
  if (root==nullptr){
    return 0;
  }
  int leftsum=sumNode(root->left);
  int rightsum=sumNode(root->right);
  return (leftsum+rightsum+root->val);
}

int main() {
    int arr[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, 6, -1, -1, 7, -1, -1};
    int length = sizeof(arr) / sizeof(arr[0]);
    int index = 0;

    cout << "Forming a binary tree from the given array:" << endl;
    cout << "---------------------------------------" << endl;

    // Build the tree
    Treenode* root = buildtree(arr, index, length);

    cout << "\n---------------------------------------" << endl;

    // Count the number of nodes
    int nodecount = nodeCount(root);
    cout << "The total number of nodes are: " << nodecount << endl;

  int sumnode = sumNode(root);
    cout << "The total sum of nodes are: " << sumnode << endl;
    return 0;
}
