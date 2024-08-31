ThreeWayMergeSort(array, left, right):
    if left < right:
        third <- (right - left) / 3
        mid1 <- left + third
        mid2 <- mid1 + third + 1

        ThreeWayMergeSort(array, left, mid1)
        ThreeWayMergeSort(array, mid1 + 1, mid2)
        ThreeWayMergeSort(array, mid2 + 1, right)

        Merge(array, left, mid1, mid2, right)

Merge(array, left, mid1, mid2, right):
    n1 <- mid1 - left + 1
    n2 <- mid2 - mid1
    n3 <- right - mid2
    L <- array of size n1
    M <- array of size n2
    R <- array of size n3

    for i from 0 to n1 - 1:
        L[i] <- array[left + i]
    for j from 0 to n2 - 1:
        M[j] <- array[mid1 + 1 + j]
    for k from 0 to n3 - 1:
        R[k] <- array[mid2 + 1 + k]

    i <- 0
    j <- 0
    k <- 0
    m <- left

    while i < n1 and j < n2 and k < n3:
        if L[i] <= M[j] and L[i] <= R[k]:
            array[m] <- L[i]
            i <- i + 1
        else if M[j] <= L[i] and M[j] <= R[k]:
            array[m] <- M[j]
            j <- j + 1
        else:
            array[m] <- R[k]
            k <- k + 1
        m <- m + 1

    while i < n1 and j < n2:
        if L[i] <= M[j]:
            array[m] <- L[i]
            i <- i + 1
        else:
            array[m] <- M[j]
            j <- j + 1
        m <- m + 1

    while j < n2 and k < n3:
        if M[j] <= R[k]:
            array[m] <- M[j]
            j <- j + 1
        else:
            array[m] <- R[k]
            k <- k + 1
        m <- m + 1

    while i < n1 and k < n3:
        if L[i] <= R[k]:
            array[m] <- L[i]
            i <- i + 1
        else:
            array[m] <- R[k]
            k <- k + 1
        m <- m + 1

    while i < n1:
        array[m] <- L[i]
        i <- i + 1
        m <- m + 1

    while j < n2:
        array[m] <- M[j]
        j <- j + 1
        m <- m + 1

    while k < n3:
        array[m] <- R[k]
        k <- k + 1
        m <- m + 1
