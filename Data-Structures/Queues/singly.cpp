/* Queue usning Singly Linked List with head and tail pointers */

#include<iostream>

class Node{
public:
    Node* next;
    int data;

    Node() : next(nullptr), data(0) {}

    Node(int val) : next(nullptr), data(val) {}
};

class Queue{
public:
    Queue() : head(nullptr), tail(nullptr) {}

    void enqueue(int val);

    void dequeue();

    void print();

private:
    Node* head;
    Node* tail;
};

void Queue::enqueue(int val){
    Node* newNode = new Node(val);

    if(!head){
        head = tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

void Queue::dequeue(){
    if(!head) return;

    Node* temp = head;

    head = temp->next;
    delete temp;
}

void Queue::print(){
    Node* temp = head;

    while(temp){
        std::cout << temp->data << "\n";
        temp = temp->next;
    }
}

int main(){
    Queue q;

    for(int i=1; i<=10; ++i)
        q.enqueue(i);

    q.print();

    q.dequeue();

    q.print();

    return 0;
}