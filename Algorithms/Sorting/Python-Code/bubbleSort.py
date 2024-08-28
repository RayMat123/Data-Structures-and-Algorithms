def bubbleSort(arr):
    n = len(arr)

    for i in range(n):
        swapped = False

        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
                swapped = True

        if not swapped:
            break

l = [5, 4, 3, 2, 1]

bubbleSort(l)

print(l)