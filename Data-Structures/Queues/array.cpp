#include<iostream>

template <typename T>
class Queue{
public:
    Queue() : capacity(0), size(0), arr(nullptr){}

    Queue(T val) : capacity(1), size(1){
        arr = new T[capacity];
        arr[0] = val;
    }

    void enqueue(T val){
        if(capacity <= size){
            capacity = (capacity == 0) ? 1 : capacity * 2;
            T *newArr = new T[capacity];
            for(int i = 0; i < size; i++)
                newArr[i] = arr[i];
            delete[] arr;
            arr = newArr;
        }
        for(int i = size; i < 0; i--)
            arr[i] = arr[size - 1];
        arr[0] = val;
    }

    void print(){
        for(int i = 0; i < size; i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }

private:
    T* arr;
    int size;
    int capacity;
};

int main(){
    Queue<int> q;

    q.enqueue(1);
    q.print();
    return 0;
}