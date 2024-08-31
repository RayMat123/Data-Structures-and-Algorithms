```pseudocode
BucketSort(array):
    minVal <- min(array)
    maxVal <- max(array)
    bucketCount <- number of buckets
    buckets <- array of size bucketCount, each a list

    for i from 0 to length(array) - 1:
        index <- (array[i] - minVal) * (bucketCount - 1) / (maxVal - minVal)
        Add array[i] to buckets[index]

    for each bucket in buckets:
        Sort(bucket)  // Use any efficient sorting algorithm here
        Concatenate(bucket to array)
```