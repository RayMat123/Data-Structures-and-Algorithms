#include <iostream>

template <typename T>
class Node
{

public:
    Node<T> *prev;
    T data;
    Node<T> *next;

    Node() : prev(nullptr), data(T()), next(nullptr) {}

    Node(T val) : prev(nullptr), data(val), next(nullptr) {}
};

template <typename T>
class List
{

public:
    List() : sentinel(nullptr), size(0)
    {
        this->sentinel->prev = this->sentinel;
        this->sentinel->next = this->sentinel;
    }

    List(T val) : sentinel(nullptr), size(0)
    {
        Node<T> *newNode = new Node(val);
        this->sentinel->prev = newNode;
        this->sentinel->next = newNode;
        newNode->prev = this->sentinel;
        newNode->next = this->sentinel

                        ++ size;
    }

    void push_front(T val)
    {
        Node<T> *newNode = new Node(val);
        if (this->sentinel->next == this->sentinel)
        {
            this->sentinel->prev = newNode;
            this->sentinel->next = newNode;
            newNode->prev = this->sentinel;
            newNode->next = this->sentinel
        }
        else
        {
            newNode->next = this->sentinel->next->next;
            this->sentinel->next->next->next = this->sentinel->next->next->next->next;
            this->sentinel->next->next->prev = newNode;
            newNode->prev = this->sentinel;
            newNode->next = this->sentinel;
        }
        ++size
    }
    void push_back(T val){
        Node<T>* newNode = new Node(val);
        if(this->sentinel->prev == this->sentinel){
            this->sentinel->prev == newNode;
            newNode->next = this->sentinel;
            newNode->prev = this->sentinel;
        }
        else{
            this->sentinel->prev->next = newNode;
            newNode->next = this->sentinel;
            newNode->prev = this->sentinel->prev;
            newNode->next = this->sentinel;
            this->sentinel->prev = newNode;
        }

        ++size;
    }

private:
    Node<T> *sentinel;
    int size;
};