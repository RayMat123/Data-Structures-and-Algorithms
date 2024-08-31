CountingSort(array):
    maxVal <- max(array)
    minVal <- min(array)
    range <- maxVal - minVal + 1
    count <- array of size range initialized to 0
    output <- array of same size as input
    
    for i from 0 to length(array) - 1:
        count[array[i] - minVal] <- count[array[i] - minVal] + 1
    
    for i from 1 to range - 1:
        count[i] <- count[i] + count[i - 1]
    
    for i from length(array) - 1 down to 0:
        output[count[array[i] - minVal] - 1] <- array[i]
        count[array[i] - minVal] <- count[array[i] - minVal] - 1
    
    for i from 0 to length(array) - 1:
        array[i] <- output[i]
