```pseudocode
// where A = array, p = first index, q = mid index, r = last index

Merge(A, p, q, r){
    nL <- q - p + 1
    nR <- r - q

    let L[0: nL] and R[0: nR] be new arrays

    for i <- 0 to nL - 1
        L[i] <- A[p + i]

    for j <- 0 to nR
        L[i] <- A[q + j + 1]

    i <- 0
    j <- 0
    k <- p

    while i < nL and j < nR
        if L[i] <= R[j]
            A[k] <- L[i]
            i <- i + 1
        else A[k] <- R[j]
            j <- j + 1
        k <- k + 1

    delete L and R
}

Merge-Sort(A, p, r){
    if p >= r
        return
    
    q = (p + r)/2

    Merge-Sort(A, p, q)
    Merge-Sort(A, q+1, r)

    Merge(A, p, q, r);
}
```