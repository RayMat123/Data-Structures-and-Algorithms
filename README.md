# Data-Structures-and-Algorithms

## Disclaimer

This repository contains notes for my personal study of data structures and algorithms. The notes are derived from the book "Introduction to Algorithms" by Cormen, Leiserson, Rivest, and Stein (CLRS), and the lecture notes are taken from course videos of MIT's course Introduction to Algorithms (6.042/SMA 5005). This repository is intended for educational purposes only. While you are welcome to use it for your own learning, contributions are not currently accepted.

<hr style="border:2px solid gray">

## Time Complexity
![Time Complexity Chart](./assets/time-complexity.jpg)

- **O(n!):** 
Factorial time complexity, represents the complexity of an algorithm where the time it takes to complete grows factorially with the input size n.

- **O(1):** 
Constant time complexity, operations that take the same time regardless of input size.

- **O(n):** 
Linear time complexity, operations that scale linearly with input size.

- **O(n<sup>2</sup>):** 
Quadratic time complexity, operations that involve nested iterations over input data.

- **O(log n):** 
Logarithmic time complexity, operations that reduce the problem size in each step.

- **O(n log n):** 
Log-linear time complexity, operations that divide the problem into smaller subproblems and process each independently.

### Time Complexity of different Data Structures and Algorithms

![Big O Cheatsheet](./assets/big-o-cheat-sheet-poster.png)

<hr style="border:2px solid gray">

## Elementary Data Structures
1. Array
- Fixed Size
- Dynamic Size

2. Matrices
- Fixed Size
- Dynamic Size

3. Linked List
- Singly Linked List
1. [With Both Head and Tail Pointers](./Data-Structures/Linked-Lists/SinglyUsingBothHeadTail.cpp)
2. [With Head Pointer only](./Data-Structures/Linked-Lists/singlyUsingHead.cpp)
- [Doubly Linked List](./Data-Structures/Linked-Lists/doubly.cpp)
- Circular Linked List
1. [Using Singly](./Data-Structures/Linked-Lists/circularSingly.cpp)
2. Using Doubly

4. Stack
- Using Fixed Sized Array
- Using Dynamic Array or Vector
- [Using Linked Lists](./Data-Structures/Stacks/singly.cpp)

5. Queue
- Using Fixed Sized Array
- Using Dynamic Array or Vector
- [Using Linked Lists](./Data-Structures/Queues/singly.cpp)

6. Hash Table
- Hash Function
- Collision Handling
1. Open Addressing
2. [Using Chaining](./Data-Structures/HashTable/)

<hr style="border:2px solid gray">


## Sorting Algorithms


### Core Sorting Algorithms to Master

- Selection Sort <br>
[Pseudocode](./Algorithms/Sorting/SelectionSort.md)

- Bubble Sort
- Insertion Sort <br>
[Pseudocode](./Algorithms/Sorting/insertionSort.md)

- Merge Sort <br>
[Pseudocode](./Algorithms/Sorting/mergeSort.md) [C++ code](./Algorithms/Sorting/mergeSort.cpp)

- HeapSort 
- QuickSort 
- Counting Sort 
- Radix Sort 
- Bucket Sort 
- ShellSort
- TimSort
- 3-way Merge Sort

### Time Complexities
<table>
    <tr>
        <th>
            Algorithm
        </th>
        <th>
            Worst Case
        </th>
        <th>
            Average Case
        </th>
    </tr>
    <tr>
        <td width="33%">
            Selection Sort
        </td>
        <td width="33%">
            O(n<sup>2</sup>)
        </td>
        <td width="33%">
            O(n<sup>2</sup>)
        </td>
    </tr>
    <tr>
        <td width="33%">
            Bubble Sort
        </td>
        <td width="33%">
            O(n<sup>2</sup>)
        </td>
        <td width="33%">
            O(n<sup>2</sup>)
        </td>
    </tr>
    <tr>
        <td width="33%">
            Insertion Sort
        </td>
        <td width="33%">
            O(n<sup>2</sup>)
        </td>
        <td width="33%">
            O(n<sup>2</sup>)
        </td>
    </tr>
    <tr>
        <td width="33%">
            Merge Sort
        </td>
        <td width="33%">
            O(n log n)
        </td>
        <td width="33%">
            O(n log n)
        </td>
    </tr>
    <tr>
        <td width="33%">
            HeapSort
        </td>
        <td width="33%">
            O(n log n)
        </td>
        <td width="33%">
            O(n log n)
        </td>
    </tr>
    <tr>
        <td width="33%">
            QuickSort 
        </td>
        <td width="33%">
            O(n<sup>2</sup>)
        </td>
        <td width="33%">
            O(n log n)
        </td>
    </tr>
    <tr>
        <td width="33%">
            Counting Sort
        </td>
        <td width="33%">
            O(n + k)
        </td>
        <td width="33%">
            O(n + k)
        </td>
    </tr>
    <tr>
        <td width="33%">
            Radix Sort
        </td>
        <td width="33%">
            O(nk)
        </td>
        <td width="33%">
            O(nk)
        </td>
    </tr>
    <tr>
        <td width="33%">
            Bucket Sort
        </td>
        <td width="33%">
            O(n<sup>2</sup>)
        </td>
        <td width="33%">
            O(n + k)
        </td>
    </tr>
    <tr>
        <td width="33%">
            ShellSort
        </td>
        <td width="33%">
            O(n<sup>2</sup>)
        </td>
        <td width="33%">
            O(n log n) to O(n<sup>2</sup>)
        </td>
    </tr>
    <tr>
        <td width="33%">
            TimSort
        </td>
        <td width="33%">
            O(n log n)
        </td>
        <td width="33%">
            O(n log n)
        </td>
    </tr>
    <tr>
        <td width="33%">
            3-way Merge Sort
        </td>
        <td width="33%">
            O(n log n)
        </td>
        <td width="33%">
            O(n log n)
        </td>
    </tr>
</table>

### Less common but useful to know

- Comb Sort
- Tree Sort
- Odd-Even Sort / Brick Sort


<hr style="border:2px solid gray">

## Searching Algorithms

### Core Searching Algorithms to Master

- Linear Search 
- Binary Search 
- Hashing 

### Less common but useful to know

- Interpolation Search 
- Ternary Search 
- Jump Search 
- Exponential Search
- Fibonacci Search 

<hr style="border:2px solid gray">

## Tree Data Structures

- Binary Tree
- Binary Search Tree
- Ternary Tree
- AVL Tree
- Red Black Tree
- Segment Tree
- N-ary Tree
- B-Tree

