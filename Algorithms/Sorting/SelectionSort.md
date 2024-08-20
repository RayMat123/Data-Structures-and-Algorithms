```pseudocode
SelectionSort(array, n){
    for i <- 0 to n-1 do
        minIndex <- i
        for j <- i+1 to n-1 do
            if array[j] < array[minIndex] then
                minIndex <- j
        if minIndex != i then
            swap(array[i], array[minIndex])
}
```