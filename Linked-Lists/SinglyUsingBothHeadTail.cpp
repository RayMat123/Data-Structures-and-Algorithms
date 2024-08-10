#include<iostream>

template <typename T>
class Node{

public:
    Node(): data(T()), next(nullptr) {}

    Node(T data): next(nullptr) {
        this->data = data;
    }

private:
    T data;
    Node<T>* next;
};

template <typename T>
class List : public Node<T> {
public:
    List(): head(nullptr), tail(nullptr){}

    List(T data): head(nullptr), tail(nullptr){
        push_back(data);
    }

    void push_front(T data){
        Node<T>* newNode = new Node(data);
        if(!head){
            head = newNode;
            tail = newNode;
        }

        newNode->next = head;
        head = newNode;
    } 

    void push_back(T data){
        tail->next = newNode;
        tail = newNode;
    }

    void 

private:
    Node<T>* head;
    Node<T>* tail;
};