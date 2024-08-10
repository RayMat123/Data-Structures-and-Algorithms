#include <iostream>

template <typename T>
class Node
{
public:
    Node<T> *next;
    T data;

    Node() : data(T()), next(nullptr) {}

    Node(T data) : next(nullptr)
    {
        this->data = data;
    }
};

template <typename T>
class List : public Node<T> {
public:
    List() : head(nullptr), size(0) {}

    List(T data) : head(nullptr), size(0)
    {
        push_back(data);
    }

    List(T arr[], int arrSize) : head(nullptr), size(0)
    {
        for (int i = 0; i < arrSize; ++i)
        {
            push_back(arr[i]);
        }
    }

    void push_front(T data){
        Node<T>* newNode = new Node(data);

        newNode->next = head;
        head = newNode;
        ++size;
    }

    void push_back(T data){
        Node<T>* newNode = new Node(data);

        if (!head)
            head = newNode;

        else
        {
            Node<T> *temp = head;

            while (temp->next)
                temp = temp->next;

            temp->next = newNode;
        }

        ++size;   
    }

    void insert(T data, int index){
        if(index > size + 1){
            std::cout << "Index out of Bounds." << std::endl;
            return;
        }

        Node<T>* newNode = new Node(data);

        if(index == 1){
            push_front(data);
            return;
        }

        if(index == size + 1){
            push_back(data);
            return;
        }

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

        while(temp->data != data && temp){
            prev = temp;
            temp = temp->next;
        }

        if(!temp){
            std::cout << "Data not found." << std::endl;
            return;
        }
        
        prev->next = temp->next;
        delete temp;
        --size;
    }

    void print(){
        Node<T>* temp = head;
        for(int i = 0; i < size; ++i){
            std::cout << temp->data << std::endl;
            temp = temp->next;
        }
    }

private:
    Node<T> *head;
    int size;
};

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    List l(arr, 5);

    l.push_front(0);

    l.insert(6, 7);

    l.delete_node(3);

    l.print();

    return 0;
}