def selectionSort(arr, n):
    for i in range(n):
        minIndex = i
        for j in range(i+1, n):
            if arr[j] < arr[minIndex]:
                minIndex = j
            if minIndex != i:
                temp = arr[i]
                arr[i] = arr[minIndex]
                arr[minIndex] = temp


l = [5, 4, 3, 2, 1]

selectionSort(l, len(l))

print(l)