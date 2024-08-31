```pseudocode
HeapSort(array):
    BuildMaxHeap(array)
    for i from length(array) - 1 down to 1:
        Swap(array[0], array[i])
        HeapSize <- HeapSize - 1
        MaxHeapify(array, 0)

BuildMaxHeap(array):
    HeapSize <- length(array)
    for i from floor(HeapSize / 2) down to 0:
        MaxHeapify(array, i)

MaxHeapify(array, i):
    left <- 2 * i + 1
    right <- 2 * i + 2
    largest <- i
    if left < HeapSize and array[left] > array[largest]:
        largest <- left
    if right < HeapSize and array[right] > array[largest]:
        largest <- right
    if largest != i:
        Swap(array[i], array[largest])
        MaxHeapify(array, largest)
```