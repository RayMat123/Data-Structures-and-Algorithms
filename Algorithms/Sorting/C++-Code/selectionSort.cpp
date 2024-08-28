#include<iostream>

void selectionSort(int arr[], int n){
    int minIndex;
    for(int i{ 0 }; i < n; ++i){
        minIndex = i;
        for(int j{ i+1 }; j < n; ++j){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        if(minIndex != i){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    for(int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";

    std::cout << std::endl;

    return 0;
}