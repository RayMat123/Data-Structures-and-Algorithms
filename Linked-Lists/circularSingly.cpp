#include <iostream>

template <typename T>
class Node
{
public:
    Node<T> *next;
    T data;

    Node() : data(T()), next(nullptr) {}

    Node(T val) : data(val), next(nullptr) {}
};

template <typename T>
class List
{
public:
    List() : head(nullptr), tail(nullptr), size(0) {}

    void push_front(T val)
    {
        Node<T> *newNode = new Node(val);
        if (!head)
            head = tail = newNode;
        else
        {
            newNode->next = head;
            tail->next = newNode;
            head = newNode;
        }
    }

    void push_back(T val)
    {
        Node<T> *newNode = new Node(val);

        if (!head)
            head = tail = newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }

        ++size;
    }

    void insert(T val, int index)
    {
        if (index < 0 || index > size)
            return;

        if (index == 0)
        {
            push_front(val);
            return;
        }

        if (index == size)
        {
            push_back(val);
            return;
        }

        Node<T> *newNode = new Node(val);
        Node<T> *temp = head;
        Node<T> *prev = nullptr;
        int currentIndex = 0;

        while (currentIndex != index)
        {
            prev = temp;
            temp = temp->next;
            currentIndex++;
        }

        prev->next = newNode;
        newNode->next = temp;
        ++size;
    }

    void deleteNode(T val)
    {
        if (head->data == val)
        {
            Node<T> *temp = head;
            head = temp->next;
            tail->next = head;
            delete temp;
        }
        else
        {
            Node<T> *temp = head;
            Node<T> *prev = nullptr;
            while (temp)
            {
                prev = temp;
                temp = temp->next;
            }

            prev->next = temp->next;
            delete temp;
        }

        --size;
    }

    template <typename U>
    friend std::ostream& operator<<(std::ostream& os, const List<U>& l){
        Node<U>* entry = l.head;
        for(int i = 0; i <= l.size; ++i){
            os << entry->data << " ";
            entry = entry->next;
        }
        return os;
    }

private:
    Node<T> *head;
    Node<T> *tail;



    int size;
};

int main()
{
    List<int> l;

    for (int i = 0; i < 10; ++i)
        l.push_back(i + 1);

    l.push_front(0);

    std::cout << "List: " << l << std::endl;

    return 0;
}