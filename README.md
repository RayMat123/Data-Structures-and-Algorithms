# Data-Structures-and-Algorithms

## Disclaimer

This repository contains notes for my personal study of data structures and algorithms. The notes are derived from the book "Introduction to Algorithms" by Cormen, Leiserson, Rivest, and Stein (CLRS), and the lecture notes are taken from course videos of MIT's course Introduction to Algorithms (6.042/SMA 5005). This repository is intended for educational purposes only. While you are welcome to use it for your own learning, contributions are not currently accepted.

## Elementary Data Structures
1. Array
- Fixed Size
- Dynamic Size

2. Matrices
- Fixed Size
- Dynamic Size

3. [Linked List](./Linked-Lists)
- Singly Linked List
1. [With Both Head and Tail Pointers](./Linked-Lists/SinglyUsingBothHeadTail.cpp)
2. [With Head Pointer only](./Linked-Lists/singlyUsingHead.cpp)
- [Doubly Linked List](./Linked-Lists/doubly.cpp)
- Circular Linked List
1. [Using Singly](./Linked-Lists/circularSingly.cpp)
2. Using Doubly

4. Stack
- Using Fixed Sized Array
- Using Dynamic Array or Vector
- [Using Linked Lists](./Stacks/singly.cpp)

5. Queue
- Using Fixed Sized Array
- Using Dynamic Array or Vector
- [Using Linked Lists](./Queues/singly.cpp)

6. [Hash Table](./HashTable/)
- Hash Function
- Collision Handling
1. Open Addressing
2. Chaining

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

## Time Complexity
![Time Complexity Chart](./assets/time-complexity.jpg)

- **O(1):** 
Constant time complexity, operations that take the same time regardless of input size.
- **O(N):** 
Linear time complexity, operations that scale linearly with input size.
- **O(N<sup>2</sup>):** 
Quadratic time complexity, operations that involve nested iterations over input data.
- **O(logN):** 
Logarithmic time complexity, operations that reduce the problem size in each step.
- **O(NlogN):** 
Log-linear time complexity, operations that divide the problem into smaller subproblems and process each independently.

### Time Complexity of different Data Structures and Algorithms

![Big O Cheatsheet](./assets/big-o-cheat-sheet-poster.png)

<hr style="border:2px solid gray">

## Sorting Algorithms


### Core Sorting Algorithms to Master

- Selection Sort <br>
[Pseudocode](./Sorting/SelectionSort.md)

- Bubble Sort
- Insertion Sort <br>
[Pseudocode](./Sorting/insertionSort.md)

- Merge Sort <br>
[Pseudocode](./Sorting/mergeSort.md) [C++ code](./Sorting/mergeSort.cpp)

- HeapSort 
- QuickSort (highly efficient)
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
- Binary Search (important)
- Hashing 
- Tree-based Search 
1. Breadth First Search
2. Depth First Search


### Less common but useful to know

- Interpolation Search 
- Ternary Search 
- Jump Search 
- Exponential Search
- Fibonacci Search 