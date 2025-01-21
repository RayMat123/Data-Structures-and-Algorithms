#include <iostream>

class BST {
private:
    int* root;
    int size;
    int capacity;

public:
    BST() : root(nullptr), size(0), capacity(0) {}

    BST(int _size, int val) : root(nullptr), capacity(_size) {
        root = new int[capacity];
        for (int i = 0; i < capacity; i++)
            root[i] = -1;

        root[size] = val;
        size++;
    }

    ~BST() {
        delete[] root;
    }

    int leftChild(int i) {
        return 2 * i + 1;
    }

    int rightChild(int i) {
        return 2 * i + 2;
    }

    int resize(int x) {
        if (capacity >= x) return capacity;

        capacity = (capacity == 0) ? 1 : capacity * 2;
        int* newArr = new int[capacity];
        for (int i = 0; i < size; i++)
            newArr[i] = root[i];
        for (int i = size; i < capacity; i++)
            newArr[i] = -1;

        delete[] root;
        root = newArr;

        return resize(x);
    }

    void insert(int val) {
        if (capacity == 0)
            resize(1);

        if (root[0] == -1) {
            root[0] = val;
            size++;
            return;
        }

        int currentIndex = 0;
        while (true) {
            if (val < root[currentIndex]) {
                int left = leftChild(currentIndex);
                if (left >= capacity)
                    resize(left + 1);
                if (root[left] == -1) {
                    root[left] = val;
                    size++;
                    break;
                }
                currentIndex = left;
            } else if (val > root[currentIndex]) {
                int right = rightChild(currentIndex);
                if (right >= capacity)
                    resize(right + 1);
                if (root[right] == -1) {
                    root[right] = val;
                    size++;
                    break;
                }
                currentIndex = right;
            } else {
                break;
            }
        }
    }

    void deleteRecursive(int val, int i){
        int left = leftChild(i);
        int right = rightChild(i);
        
        if(i >= capacity || root[i] == val){
            root[i] == -1;
            size--;
            return;
        }

        deleteRecursive(val, left);
        deleteRecursive(val, right);
    }

    void del(int val){
        if(root[0] == val){
            int left = leftChild(0);
            int right = rightChild(0);
        }

        deleteRecursive(val, 0);
    }

    int searchRecursive(int val, int i){
        if(i >= capacity) return -1;

        int left = leftChild(i);
        int right = rightChild(i);
        
        if(val < root[i])
            i = searchRecursive(val, left);
        if(val > root[i])
            i = searchRecursive(val, right);

        return (root[i] == val) ? i : searchRecursive(val, i);
    }

    void search(int val){
        int x = searchRecursive(val, 0);

        if(x == -1){
            std::cout << "Value not found." << std::endl;
            return;
        }

        std::cout << "Value found at index " << x << std::endl;
    }

    void preorder(int i) {
        if (i >= capacity || root[i] == -1) return;

        std::cout << root[i] << " -> ";
        preorder(leftChild(i));
        preorder(rightChild(i));
    }

    void preorderTraversal() {
        std::cout << "Preorder Traversal: " << std::endl;
        preorder(0);
        std::cout << "END" << std::endl;
    }

    void inorder(int i){
        if(i >= capacity || root[i] == -1) return;

        int left = leftChild(i);
        int right = rightChild(i);

        inorder(leftChild(i));
        std::cout << root[i] << " -> ";
        inorder(rightChild(i));
    }

    void inorderTraversal() {
        std::cout << "Inorder Traversal: " << std::endl;
        inorder(0);
        std::cout << " END" << std::endl;
    }

    void postorder(int i){
        if(i >= capacity || root[i] == -1) return;

        int left = leftChild(i);
        int right = rightChild(i);

        postorder(leftChild(i));
        postorder(rightChild(i));

        std::cout << root[i] << " -> ";
    }

    void postorderTraversal() {
        std::cout << "Postder Traversal: " << std::endl;
        postorder(0);
        std::cout << " END" << std::endl;
    }

    void print(){
        std::cout << std::endl;
        for(int i = 0; i < capacity; i++)
            std::cout << root[i] << " ";

        std::cout << std::endl;
    }
};

int main() {
    BST bst;

    bst.insert(10);
    bst.insert(5);
    bst.insert(15);

    bst.preorderTraversal();

    bst.inorderTraversal();

    bst.postorderTraversal();

    bst.search(10);


    bst.print();

    return 0;
}
