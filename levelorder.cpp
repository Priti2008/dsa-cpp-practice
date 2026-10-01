// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int value) {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };

// void levelorder(Node* root) {

//     if (root == NULL)
//         return;

//     queue<Node*> q;

//     q.push(root);

//     while (!q.empty()) {

//         Node* current = q.front();
//         q.pop();

//         cout << current->data << " ";

//         if (current->left != NULL)
//             q.push(current->left);

//         if (current->right != NULL)
//             q.push(current->right);
//     }
// }

// int main() {

//     Node* root = new Node(1);

//     root->left = new Node(2);
//     root->right = new Node(3);

//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     cout << "Level Order: ";
//     levelorder(root);

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void levelorder(Node* root) {

    if (root == NULL)
        return;

    queue<Node*> q;

    q.push(root);

    while (!q.empty()) {

        Node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left != NULL)
            q.push(current->left);

        if (current->right != NULL)
            q.push(current->right);
    }
}

int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Level Order: ";
    levelorder(root);

    return 0;
}