/* Stack using Singly Linked List */

#include<iostream>

class Node {
public:
    int data;
    Node* next;

    Node() : data(0), next(nullptr){}

    Node(int val) : next(nullptr){
        this->data = val;
    }
};

class Stack : public Node {
public:
    Stack() : head(nullptr), size(0){}

    Stack(int val) : head(nullptr), size(0){
        push(val);
    }

    void push(int val);

    void pop();

    bool isEmpty() const;

    int top() const;

    int sizeOf() const;

    void print();

private:
    Node* head;
    int size;
};

void Stack::push(int val){
    Node* newNode = new Node(val);

    newNode->next = head;
    head = newNode;
    ++size;
}

void Stack::pop(){
    if(isEmpty()){
        std::cout << "Stack is empty cannot pop." << std::endl;
        return;
    }

    Node* temp = head;

    head = head->next;
    delete temp;
    --size;
}

bool Stack::isEmpty() const {
    return head == nullptr;
}

int Stack::top() const {
    if(isEmpty()){
        std::cout << "Stack is empty." << std::endl;
        return -1;
    }
    return head->data;
}

int Stack::sizeOf() const {
    return size;
}

void Stack::print(){
    Node* temp = head;

    while(temp){
        std::cout << temp->data << "\n";
        temp = temp->next;
    }
}

int main(){
    Stack s;

    for(int i=10; i > 0; --i)
        s.push(i);
    s.pop();

    s.print();

    std::cout << s.isEmpty() << std::endl;

    std::cout << s.sizeOf() << std::endl;

    std::cout << s.top() << std::endl;



    return 0;
}