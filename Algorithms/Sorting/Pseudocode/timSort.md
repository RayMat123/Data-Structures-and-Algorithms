```pseudocode
TimSort(array):
    minRun <- 32
    n <- length(array)
    for start from 0 to n in steps of minRun:
        end <- min(start + minRun - 1, n - 1)
        InsertionSort(array, start, end)

    size <- minRun
    while size < n:
        for start from 0 to n in steps of 2 * size:
            mid <- min(start + size - 1, n - 1)
            end <- min(start + 2 * size - 1, n - 1)
            Merge(array, start, mid, end)
        size <- 2 * size

InsertionSort(array, left, right):
    for i from left + 1 to right:
        key <- array[i]
        j <- i - 1
        while j >= left and array[j] > key:
            array[j + 1] <- array[j]
            j <- j - 1
        array[j + 1] <- key

Merge(array, left, mid, right):
    n1 <- mid - left + 1
    n2 <- right - mid
    L <- array of size n1
    R <- array of size n2

    for i from 0 to n1 - 1:
        L[i] <- array[left + i]
    for j from 0 to n2 - 1:
        R[j] <- array[mid + 1 + j]

    i <- 0
    j <- 0
    k <- left
    while i < n1 and j < n2:
        if L[i] <= R[j]:
            array[k] <- L[i]
            i <- i + 1
        else:
            array[k] <- R[j]
            j <- j + 1
        k <- k + 1

    while i < n1:
        array[k] <- L[i]
        i <- i + 1
        k <- k + 1

    while j < n2:
        array[k] <- R[j]
        j <- j + 1
        k <- k + 1
```