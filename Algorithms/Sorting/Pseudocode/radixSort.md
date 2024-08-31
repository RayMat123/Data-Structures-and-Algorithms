RadixSort(array):
    maxVal <- max(array)
    exp <- 1
    while maxVal / exp > 0:
        CountingSortByDigit(array, exp)
        exp <- exp * 10

CountingSortByDigit(array, exp):
    n <- length(array)
    output <- array of size n
    count <- array of size 10 initialized to 0

    for i from 0 to n - 1:
        index <- (array[i] / exp) % 10
        count[index] <- count[index] + 1
    
    for i from 1 to 9:
        count[i] <- count[i] + count[i - 1]
    
    for i from n - 1 down to 0:
        index <- (array[i] / exp) % 10
        output[count[index] - 1] <- array[i]
        count[index] <- count[index] - 1
    
    for i from 0 to n - 1:
        array[i] <- output[i]
