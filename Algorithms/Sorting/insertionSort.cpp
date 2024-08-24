#include<iostream>

void insertionSort(int arr[], int n){
    int key = 0;
    int i = 0;

    for(int j = 1; j < n; j++){
        key = arr[j];
        i = j - 1;
        while(i >= 0 && arr[i] > key){
            arr[i + 1] = arr[i];
            i--; 
        }
        arr[i + 1] = key;
    }
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);

    for(int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}