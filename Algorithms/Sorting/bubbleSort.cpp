#include<iostream>

void bubbleSort(int arr[], int n){
    bool swapped = false;
    for(int i = 0; i < n - 1; i++){
        swapped = false;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
            if(!swapped) break;
        }
    }
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    for(int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}