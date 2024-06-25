// 7. Знайти максимальний елемент непорожнього дерева Т.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }

    if (data <= root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }

    return root;
}

int findMax(Node* root) {
    if (root == nullptr) {
        cout << "Дерево порожнє\n";
        return -1;
    }

    while (root->right != nullptr) {
        root = root->right;
    }

    return root->data;
}

int main() {
    Node* root = nullptr;
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 3);
    insert(root, 8);
    insert(root, 12);
    insert(root, 18);

    int maxElement = findMax(root);
    cout << "Максимальний елемент у дереві: " << maxElement << endl;

    return 0;
}
