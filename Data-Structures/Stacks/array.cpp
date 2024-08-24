#include <iostream>

template <typename T>
class Stack
{
public:
    // Default constructor
    Stack() : capacity(0), size(0), arr(nullptr) {}

    // Constructor with initial value
    Stack(T val) : capacity(1), size(1)
    {
        arr = new T[capacity];
        arr[0] = val;
    }

    // Destructor to clean up memory
    ~Stack()
    {
        delete[] arr;
    }

    // Push method to add an element to the stack
    void push(T val)
    {
        if (capacity <= size)
        {
            // Increase capacity, create new array and copy existing elements
            capacity = (capacity == 0) ? 1 : capacity * 2;
            T *newArr = new T[capacity];
            for (int i = 0; i < size; ++i)
            {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }
        arr[size] = val;
        size++;
    }

    // Pop method to remove the top element
    void pop()
    {
        if (size > 0)
        {
            --size;
        }
        else
        {
            throw std::out_of_range("Stack underflow: No elements to pop.");
        }
    }

    // Method to get the top element without removing it
    T top() const
    {
        if (size > 0)
        {
            return arr[size - 1];
        }
        throw std::out_of_range("Stack is empty: No elements to return.");
    }

    // Method to check if the stack is empty
    bool isEmpty() const
    {
        return size == 0;
    }

    // Method to get the current size of the stack
    int getSize() const
    {
        return size;
    }

    void print(){
        for(int i = 0; i < size; ++i)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }

private:
    T *arr;
    int capacity;
    int size;
};

int main()
{
    Stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // std::cout << "Top element: " << stack.top() << std::endl; // Should print 30

    // stack.pop();
    // std::cout << "Top element after pop: " << stack.top() << std::endl; // Should print 20

    
    stack.print();

    return 0;
}
