#pragma once
#include <iostream>

template <typename T>
class Node{
public:
    Node(T data) : prev(nullptr), next(nullptr) {
        this->data = data;
    }


    Node<T>* prev;
    T data;
    Node<T>* next;
};

template <typename T>
class List {
public:
    List(bool isCircular){
        if(!isCircular){
            this->head = nullptr;
            this->tail = nullptr;
            this->sentinel = nullptr;
            return;
        }

        this->sentinel = new Node(0);
        this->sentinel->next = this->sentinel;
        this->sentinel->prev = this->sentinel;
    }

    void singly_pushBack(Node<T>& node);
    void singly_print();


    void doubly_pushBack(Node<T>& node);
    void doubly_print();

    void circularSingly_pushback(Node<T>& node);
    void circularSingly_print();

    void circularDoubly_pushback(Node<T>& node);
    void circularDoubly_print();

    void push_back(T val, bool isSingly, bool isDoubly, bool isCircularSingly, bool isCircularDoubly);

private:
    Node<T>* head;
    Node<T>* tail;
    Node<T>* sentinel;  
};


