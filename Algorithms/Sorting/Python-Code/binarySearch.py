def binarySearch(arr, target):
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = left + (right - left) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    
    return -1

arr = []

for i in range(10):
    arr.append(i + 1)

print("Array: ", arr)

x = binarySearch(arr, 5)

print("Result: ", x)