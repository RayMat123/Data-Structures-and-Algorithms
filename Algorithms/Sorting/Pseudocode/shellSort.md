```pseudocode
ShellSort(array):
    n <- length(array)
    gap <- n / 2
    while gap > 0:
        for i from gap to n - 1:
            temp <- array[i]
            j <- i
            while j >= gap and array[j - gap] > temp:
                array[j] <- array[j - gap]
                j <- j - gap
            array[j] <- temp
        gap <- gap / 2
```