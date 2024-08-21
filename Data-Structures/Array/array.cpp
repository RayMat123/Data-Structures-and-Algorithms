#include<iostream>

// Dynamic Array 

template <typename T>
class Array{
public:

    Array() : arr(nullptr), size (0) {}

    Array(T val) : arr(nullptr), size(0){
        arr = new T[1];
        arr[size] = val;
        ++size;
    }

    Array(T _arr[], int _size) : arr(nullptr), size(0) {
        size = _size;
        arr = new T[size];
        for(int i = 0; i < size; ++i)
            arr[i] = _arr[i];  
    }

    void push_back(T data){
        T* _arr = new T[size + 1];
        for(int i = 0; i < size; ++i)
            _arr[i] = arr[i];

        delete[] arr;
        arr = _arr;
        arr[size] = data;
    }

    void print(){
        for(int i = 0; i < size; ++i)
            std::cout << arr[i] << " ";

        std::cout << std::endl;
    }

private:
    T* arr;
    int size;
};

int main(){
    int myArr[] = {1, 2, 3, 4, 5};
    Array<int> a(myArr, 5);

    a.print();

    return 0;
}