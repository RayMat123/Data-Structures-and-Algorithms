#include "Node.h"
#include<string>

template class List<int>;
template class List<double>;
template class List<std::string>;

template <typename T>
void List<T>::singly_pushBack(Node<T>& node){

    if(!this->head){ // O(1)
        this->head = node;
        tail = node;
        return;
    }

    tail->next = node; // O(1)
    tail = node;
}





template <typename T>
void List<T>::doubly_pushBack(Node<T>& node){
 

    if(!this->head){ // O(1)
        this->head = node;
        this->tail = node;
        return;
    }

    // O(1)
    tail->next = node;
    newNode->prev = tail;
    tail = node;
}



template <typename T>
void List<T>::circularSingly_pushback(Node<T>& node){

    // O(1)
    if(this->sentinel->next == this->sentinel){
        this->sentinel->next == node;
        node->next == this->sentinel;
        return;
    }

    // O(n)
    Node<T>* temp = this->sentinel;
    while(temp->next != this->sentinel)
        temp = temp->next;

    temp->next = node;
    node.next = this->sentinel;
}

template <typename T>
void List<T>::circularDoubly_pushback(Node<T>& node){
    // O(1)
    node.prev = this->sentinel->prev;
    this->sentinel->prev->next = node;
    this->sentinel->prev = node;
    node.next = this->sentinel;
}



template <typename T>
void List<T>::singly_print()
{
    Node<T> *temp = this->head;
    std::cout << "Head: " << this->head << std::endl;
    while(temp != nullptr) // O(n)
    {
        std::cout << "Data: " << temp->data << " Next: " << temp->next << std::endl;
        temp = temp->next;
    }
}

template <typename T>
void List<T>::doubly_print(){
    Node<T>* temp = this->head;

    while(temp != nullptr){
        std::cout << "Prev: " << temp->prev << " Data: " << temp->data << " Next: " << temp->next << std::endl;
        temp = temp->next;
    }
}

template <typename T>
void List<T>::circularSingly_print(){
    Node<T>* temp = this->sentinel;
    while(temp != this->sentinel){
        std::cout << "Data: " << temp->data << " Next: " << temp->next << std::endl;
        temp = temp->next;
    }
}

template <typename T>
void List<T>::circularDoubly_print(){
    Node<T>* temp = this->sentinel;
    while(temp != this->sentinel){
        std::cout << "Prev: " << temp->prev << " Data: " << temp->data << " Next: " << temp->next << std::endl;
        temp = temp->next;
    }
}

template <typename T>
void List<T>::push_back(T val, bool isSingly, bool isDoubly, bool isCircularSingly, bool isCircularDoubly){
    if(isSingly){
        Node<T>* newNode = new Node<T>(val);
        singly_pushBack(newNode);
    }
    else if(isDoubly){
        Node<T>* newNode = new Node<T>(val);
        doubly_pushBack(newNode);
    }
    else if(isCircularSingly){
        Node<T>* newNode = new Node<T>(val);
        circularSingly_pushback(newNode);
    }
    else if(isCircularDoubly){
        Node<T>* newNode = new Node<T>(val);
        circularDoubly_pushback(newNode;)
    }
}