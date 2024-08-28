```pseudocode
// A = array, n = size

BubbleSort(A, n)
    for i <- 0 to n do
        swapped <- false
        
        for j <- 0 to n-i-1 do
            if arr[j] > arr[j+1] then
                temp <- arr[j]
                arr[j] <- arr[j+1]
                arr[j+1] <- temp
                
                swapped <- true
                
        if swapped == false then
            break
```