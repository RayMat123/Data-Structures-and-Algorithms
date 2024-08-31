def insertionSort(arr):
    n = len(arr)
    for j in range(n):
        key = arr[j]
        i = j - 1
        while i >= 0 and arr[i] > key:
            arr[i + 1] = arr[i]
            i = i - 1
        arr[i + 1] = key

l = [5, 4, 3, 2, 1]
insertionSort(l)
print(l)