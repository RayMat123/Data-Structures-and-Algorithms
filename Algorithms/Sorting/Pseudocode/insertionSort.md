```pseudocode
// A = array and n = size

Insertion-Sort(A, n) {  // Sorts A[0...n-1]
    for j <- 1 to n
        do key <- A[j]
        i <- j - 1
        while i >= 0 and A[i] > key
            do A[i + 1] <- A[i]
               i <- i - 1 
        A[i + 1] <- key
}

```