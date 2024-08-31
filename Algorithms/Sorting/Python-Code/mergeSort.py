def merge(arr, first, mid, last):
    nL = mid - first + 1
    nR = last - mid

    left = [0] * nL
    right = [0] * nR

    for i in range(nL):
        left[i] = arr[first + i]

    for j in range(nR):
        right[j] = arr[mid + j + 1]

    i, j, k = 0, 0, first

    while i < nL and j < nR:
        if left[i] <= right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1
        k += 1

    while i < nL:
        arr[k] = left[i]
        i += 1
        k += 1

    while j < nR:
        arr[k] = right[j]
        j += 1
        k += 1

def mergeSort(arr, p, r):
    if p >= r:
        return
    
    q = (p + r)//2
    mergeSort(arr, p, q)
    mergeSort(arr, q+1, r)

    merge(arr, p, q, r)

l = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]

mergeSort(l, 0, len(l) - 1)

print(l)