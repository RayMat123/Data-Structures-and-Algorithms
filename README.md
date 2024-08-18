# Data-Structures-and-Algorithms


## Elementary Data Structures
- Array
- Matrices
- Linked List
1. Singly Linked List
2. Doubly Linked List
3. Circular Singly Linked List
4. Circular Doubly Linked List
- Stack
1. Stack Implementation using Fixed Sized Array
2. Stack Implementation using Dynamic Array or Vector
3. Stack Implementation Linked Lists
- Queue
1. Queue Implementation using Fixed Sized Array
2. Queue Implementation using Dynamic Array or Vector
3. Queue Implementation Linked Lists
- Hash Table
1. Hash Function
2. Open Addressing
3. Chaining

<hr style="border:2px solid gray">

## Time Complexity
![Time Complexity Chart](./assets/time-complexity.jpg)

- **O(1):** 
Constant time complexity, operations that take the same time regardless of input size.
- **O(N):** 
Linear time complexity, operations that scale linearly with input size.
- **O(N^2):** 
Quadratic time complexity, operations that involve nested iterations over input data.
- **O(logN):** 
Logarithmic time complexity, operations that reduce the problem size in each step.
- **O(NlogN):** 
Log-linear time complexity, operations that divide the problem into smaller subproblems and process each independently.

Time Complexity of different Data Structures and Algorithms

![Big O Cheatsheet](./assets/big-o-cheat-sheet-poster.png)

<hr style="border:2px solid gray">

## Sorting Algorithms

### Core Sorting Algorithms to Master

- Selection Sort
- Bubble Sort
- Insertion Sort
```pseudocode

Insertion-Sort(A, n){   // Sorts A[1...n]
    // where A = array and n = Size of A

    for j <- 2 to n
        do key <- A[j]
        i <- j - 1
        while i > 0 and A[i] > key
            do A[i + 1] <- A[i]
                i <- i - 1 
        A[i + 1] <- key
}
```
- Merge Sort 
- HeapSort 
- QuickSort (highly efficient)
- Counting Sort 
- Radix Sort 
- Bucket Sort 
- ShellSort
- TimSort
- 3-way Merge Sort

### Less common but useful to know

- Comb Sort
- Tree Sort
- Odd-Even Sort / Brick Sort


<hr style="border:2px solid gray">

## Searching Algorithms

### Core Searching Algorithms to Master

- Linear Search 
- Binary Search (important)
- Hashing 
- Tree-based Search 
1. Binary Tree Search
2. AVL Tree Search
3. Red-Bliack Tree Search
4. B-Tree Search
5. Trie (Prefix) Tree Search
- String Searching 

### Less common but useful to know

- Interpolation Search 
- Ternary Search 
- Jump Search 
- Exponential Search
- Fibonacci Search 