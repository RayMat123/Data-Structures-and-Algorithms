#include<iostream>

void merge(int arr[], int first, int mid, int last){
    int nL = mid - first + 1;
    int nR = last - mid;

    int *left = new int[nL];
    int *right = new int[nR];

    for(int i = 0; i < nL; i++)
        left[i] = arr[first + i];

    for(int j = 0; j < nR; j++)
        right[j] = arr[mid + j + 1];

    int i = 0, j = 0, k = first;

    while(i < nL && j < nR){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < nL){
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j < nR){
        arr[k] = right[j];
        j++;
        k++;
    }

    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int first, int last){
    if(first >= last) return;

    int mid = (first + last)/2;

    mergeSort(arr, first, mid);
    mergeSort(arr, mid+1, last);

    merge(arr, first, mid, last);
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    

    mergeSort(arr, 0, 4);

    for(int x = 0; x < 5; ++x)
        std::cout << arr[x] << " ";
    
    std::cout << std::endl;

    return 0;
}