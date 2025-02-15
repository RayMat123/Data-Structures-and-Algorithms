#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    int height;

    Node(int val) : key(val), left(nullptr), right(nullptr), height(1) {}
};

class AVL{
private:
    Node* root;

    int getHeight(Node* node){
        return (node) ? node->height : 0;
    }

    int getBalanceFactor(Node* node){
        return (node) ? max(getHeight(node->left), getHeight(node->right)) - 1 : 0;
    }

    Node* rotateRight(Node* y){
        Node* x = y->left;
        Node* T2 = x->right;

        x->right = y;
        y->left = T2;

        y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
        x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

        return x;
    }

    Node* rotateLeft(Node* x){
        Node* y = x->right;
        Node* T2 = y->left;

        y->left = x;
        x->right = T2;

        x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
        y->height = max(getHeight(x->left), getHeight(x->right)) + 1;

        return y;
    }

    Node* insertNode(Node* node, int val){
        if(!node) return new Node(val);

        if(val < node->key)
            node->left = insertNode(node->left, val);
        else if(val > node->key)
            node->right = insertNode(node->right, val);
        else
            return node;

        node->height = 1 + max(getHeight(node->left), getHeight(node->right));

        int balance = getBalanceFactor(node);

        if(balance > 1 && val < node->left->key)
            return rotateRight(node);
        
        if(balance < -1 && val > node->right->key)
            return rotateLeft(node);

        if(balance > 1 && val > node->left->key){
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }

        if(balance < -1 && val < node->right->key){
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }
        return node;
    }

    Node* searchInorder(Node* node, int val){
        if(!node) return nullptr;

        if(node->key > val)
            searchInorder(node->left, val);
        else if(node->key < val)
            searchInorder(node->right, val);
        else
            return node;
    }

    void preorderTraversal(Node* node){
        if(!node) return;

        cout << node->key << " - ";
        preorderTraversal(node->left);
        preorderTraversal(node->right);
    }

    void inorderTraversal(Node* node){
        if(!node) return;

        inorderTraversal(node->left);
        cout << node->key << " - ";
        inorderTraversal(node->right);
    }

    void postorderTraversal(Node* node){
        if(!node) return;

        postorderTraversal(node->left);
        postorderTraversal(node->right);
        cout << node->key << " - ";
    }

public:
    AVL() : root(0) {}

    void insert(int val){
        root = insertNode(root, val);
    }

    void search(int val){
        Node* temp = searchInorder(root, val);

        if (temp != nullptr) 
            cout << "Value found: " << temp->key << endl;
        else 
            cout << "Value " << val << " not found." << endl;
    
    }

    void display(){
        inorderTraversal(root);
        cout << " END" << endl;
    }
};

int main(){
    AVL avl;

    avl.insert(10);
    avl.insert(5);
    avl.insert(7);
    avl.insert(15);
    avl.insert(20);
    avl.insert(25);

    avl.display();

    avl.search(25);
    avl.search(30);

    return 0;
}