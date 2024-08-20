#include <iostream>

template <typename T>
class Node
{

public:
    Node<T> *previous;
    T data;
    Node<T> *next;

    Node() : data(T()), previous(nullptr), next(nullptr) {}

    Node(T val) : data(val), previous(nullptr), next(nullptr) {}
};

template <typename T>
class List
{

public:
    List() : head(nullptr), tail(nullptr), size(0) {}

    void push_front(T val);
    void push_back(T val);

    void insert(T val, int index);

    void deleteNode(T val);

    template <typename U>
    friend std::ostream &operator<<(std::ostream &os, const List<U> &l);

private:
    Node<T> *head;
    Node<T> *tail;

    int size;
};

template <typename T>
void List<T>::push_front(T val)
{
    Node<T> *newNode = new Node(val);

    if (!head)
        head = tail = newNode;

    else
    {
        newNode->next = head;
        head->previous = newNode;
        head = newNode;
    }
    ++size;
}

template <typename T>
void List<T>::push_back(T val)
{
    Node<T> *newNode = new Node(val);

    if (!tail)
        head = tail = newNode;

    else
    {
        tail->next = newNode;
        newNode->previous = tail->previous;
        tail = newNode;
    }

    ++size;
}

template <typename T>
void List<T>::insert(T val, int index)
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
    int currentIndex = 0;

    while (currentIndex != index)
    {
        temp = temp->next;
        currentIndex++;
    }

    temp->previous = newNode->previous;
    newNode->next = temp;

    ++size;
}

template <typename T>
void List<T>::deleteNode(T val)
{
    if (head->data == val)
    {
        Node<T> *temp = head;
        temp->next = head->next;
        head = temp->next;
        delete temp;
    }

    else if (tail->data == val)
    {
        Node<T> *temp = tail;
        temp->previous = tail->previous;
        tail = temp->previous;
        tail->next = nullptr;
        delete temp;
    }

    Node<T> *temp = head;
    while (temp && temp->data != val)
        temp = temp->next;

    if (!temp)
        return;

    else
    {
        temp->previous->next = temp->next;
        temp->next->previous = temp->previous;

        delete temp;
    }

    --size;
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const List<T> &l)
{
    Node<T> *entry = l.head;
    while (entry)
    {
        os << entry->data << " ";
        entry = entry->next;
    }
    return os;
}

int main()
{
    List<int> l;

    for (int i = 0; i < 10; ++i)
        l.push_back(i + 1);

    l.push_front(0);

    std::cout << "List: " << l << std::endl;

    return 0;
}