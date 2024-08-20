#include<iostream>

template <typename T>
class Node{

public:
    T data;
    Node<T>* next;

    Node(): data(T()), next(nullptr) {}

    Node(T data): next(nullptr) {
        this->data = data;
    }
};

template <typename T>
class List : public Node<T> {
public:
    List(): head(nullptr), tail(nullptr), size(0) {}

    List(T data): head(nullptr), tail(nullptr), size(0) {
        push_back(data);
    }

    void push_front(T data){
        Node<T>* newNode = new Node(data);
        if(!head){
            head = newNode;
            tail = newNode;
            ++size;
            return;
        }

        newNode->next = head;
        head = newNode;
        ++size;
    } 

    void push_back(T data){
        Node<T>* newNode = new Node(data);

        if(!head){
            head = newNode;
            tail = newNode;
            ++size;
            return;
        }

        tail->next = newNode;
        tail = newNode;
        ++size;
    }

    void insert(T data, int index){
        if(index > size + 1){
            std::cout << "Index out of bounds." << std::endl;
            return;
        }

        if(index == 1){
            push_front(data);
            return;
        }

        if(index == size + 1){
            push_back(data);
            return;
        }

        Node<T>* newNode = new Node(data);
        Node<T>* temp = head;
        Node<T>* prev = nullptr;
        int currentIndex = 1;

        while(currentIndex != index){
            prev = temp;
            temp = temp->next;
            currentIndex++;
        }

        prev->next = newNode;
        newNode->next = temp;
        ++size;
    }

    void delete_node(T data){
        Node<T>* temp = head;

        if(head->data == data){
            head = temp->next;
            delete temp;
            --size;
            return;
        }

        Node<T>* prev = nullptr;

        while(temp && temp->data != data){
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        if(temp == tail)
            tail = prev->next;
        delete temp;
        --size;
    }

    void print(){
        Node<T>* temp = head;

        while(temp){
            std::cout << temp->data << std::endl;
            temp = temp->next;
        }
    }

private:
    Node<T>* head;
    Node<T>* tail;
    int size;
};

int main(){
    List<int> l;

    for(int i = 0; i < 10; ++i){
        l.push_back(i+1);
    }

    l.delete_node(9);

    l.insert(9, 9);

    l.print();

    return 0;
}