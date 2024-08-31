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
- [Dynamic Size](./Data-Structures/Array/array.cpp)

2. Matrices
- Fixed Size
- Dynamic Size

3. [Linked List](./Data-Structures/Linked-Lists/Linked-Lists-Notes.pdf)
- Singly Linked List
1. With Both Head and Tail Pointers <br>
[C++ code](./Data-Structures/Linked-Lists/SinglyUsingBothHeadTail.cpp) [Python code](./Data-Structures/Linked-Lists/singlyBoth.py)
2. With Head Pointer only <br>
[C++ code](./Data-Structures/Linked-Lists/singlyUsingHead.cpp)
- Doubly Linked List <br>
[C++ code](./Data-Structures/Linked-Lists/doubly.cpp)
- Circular Linked List
1. Using Singly <br>
[C++ code](./Data-Structures/Linked-Lists/circularSingly.cpp)
2. Using Doubly <br>
[C++ code](./Data-Structures/Linked-Lists/circularDoubly.cpp)

4. Stack
- Using Fixed Sized Array
- Using Dynamic Array or Vector
- Using Linked Lists <br>
[C++ code](./Data-Structures/Stacks/singly.cpp)

5. Queue
- Using Fixed Sized Array
- Using Dynamic Array or Vector
- Using Linked Lists <br> 
[C++ code](./Data-Structures/Queues/singly.cpp)

6. Hash Table
- Hash Function
- Collision Handling
1. Open Addressing
2. Using Chaining <br> 
[C++ code](./Data-Structures/HashTable/)

<hr style="border:2px solid gray">

## Basic Operations

<table>
    <tr>
        <th>
            Operation
        </th>
        <th>
            Detail
        </th>
    </tr>
    <tr>
        <td>
            Access
        </td>
        <td>
            Retrieve an element from the data structure.
        </td>
    </tr>
    <tr>
        <td>
            Insert
        </td>
        <td>
            Add a new element into the data structure.
        </td>
    </tr>
    <tr>
        <td>
            Delete
        </td>
        <td>
            Remove an existing element from the data structure.
        </td>
    </tr>
    <tr>
        <td>
            Update
        </td>
        <td>
            Modify an element in the data structure.
        </td>
    </tr>
    <tr>
        <td>
            Search
        </td>
        <td>
            Locate an element by its value or key.
        </td>
    </tr>
    <tr>
        <td>
            Traverse
        </td>
        <td>
            Visit each element in the data structure, often used to perform operations on all elements.
        </td>
    </tr>
    <tr>
        <td>
            Check
        </td>
        <td>
            Determine certain properties or conditions, such as whether the structure is empty or whether an element exists.
        </td>
    </tr>
</table>


### Why Sorting is not mentioned in basic operations?

Sorting is typically not included as a fundamental operation for all data structures because:

**Not All Data Structures Support Sorting Directly:** <br>
Some data structures, like stacks or queues, are inherently unordered and don't support direct sorting operations. Sorting is more relevant to data structures like arrays or lists, where elements have a specific order.

**Sorting is an Operation on Data, Not a Data Structure:** <br>
Sorting is often considered an algorithmic operation applied to data structures rather than a fundamental operation of the data structures themselves. For example, you sort an array using sorting algorithms, but sorting isn't a built-in operation of the array data structure.

**Sorting Complexity:** <br>
Sorting introduces complexity that depends on the type of data structure and the algorithm used. It's not a basic operation like access or insertion, which are more universally applicable.

### Time Complexity of Basic Operations on Elementary Data Structures

**Array**

<table>
    <tr>
        <th>
            Operation
        </th>
        <th>
            Time Complexity
        </th>
        <th>
            Note
        </th>
    </tr>
    <tr>
        <td>
            Access
        </td>
        <td>
            O(1)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Insert
        </td>
        <td>
            O(n)/O(1)
        </td>
        <td>
            Inserting from an arbitrary position / Inserting at the end if there is space
        </td>
    </tr>
    <tr>
        <td>
            Delete
        </td>
        <td>
            O(n)/O(1)
        </td>
        <td>
            deleting from an arbitrary position / deleting from the end
        </td>
    </tr>
    <tr>
        <td>
            Update
        </td>
        <td>
            O(1)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Search
        </td>
        <td>
            O(n)/O(log n)
        </td>
        <td>
            Linear search / Binary search if sorted
        </td>
    </tr>
</table>

**Matrix**

<table>
    <tr>
        <th>
            Operation
        </th>
        <th>
            Time Complexity
        </th>
        <th>
            Note
        </th>
    </tr>
    <tr>
        <td>
            Access
        </td>
        <td>
            O(1)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Insert
        </td>
        <td>
            O(m . n)
        </td>
        <td>
            If resizing or modifying a specific element in a fixed-size matrix
        </td>
    </tr>
    <tr>
        <td>
            Delete
        </td>
        <td>
            O(m . n)
        </td>
        <td>
            Similar to insert if resizing or modifying
        </td>
    </tr>
    <tr>
        <td>
            Update
        </td>
        <td>
            O(1)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Search
        </td>
        <td>
            O(m . n) / O(log n)
        </td>
        <td>
            Linear search / if sorted
        </td>
    </tr>
</table>

**Linked List**

- **With Head Pointer Only:**
<table>
    <tr>
        <th>
            Operation
        </th>
        <th>
            Time Complexity
        </th>
        <th>
            Note
        </th>
    </tr>
    <tr>
        <td>
            Access
        </td>
        <td>
            O(n)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Insert
        </td>
        <td>
            O(1)/O(n)
        </td>
        <td>
            At the head / At an arbitrary position
        </td>
    </tr>
    <tr>
        <td>
            Delete
        </td>
        <td>
            O(1)/O(n)
        </td>
        <td>
            At the head / At an arbitrary position
        </td>
    </tr>
    <tr>
        <td>
            Update
        </td>
        <td>
            O(n)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Search
        </td>
        <td>
            O(n)
        </td>
        <td>
            Linear search 
        </td>
    </tr>
</table>

- **With Both Head and Tail Pointers:**
<table>
    <tr>
        <th>
            Operation
        </th>
        <th>
            Time Complexity
        </th>
        <th>
            Note
        </th>
    </tr>
    <tr>
        <td>
            Access
        </td>
        <td>
            O(n)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Insert
        </td>
        <td>
            O(1)/O(n)
        </td>
        <td>
            At the head or tail /  At an arbitrary position
        </td>
    </tr>
    <tr>
        <td>
            Delete
        </td>
        <td>
            O(1)/O(n)
        </td>
        <td>
            At the head or tail / At an arbitrary position
        </td>
    </tr>
    <tr>
        <td>
            Update
        </td>
        <td>
            O(n)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Search
        </td>
        <td>
            O(n)
        </td>
        <td>
            Linear search 
        </td>
    </tr>
</table>

**Stack**

- **Array:**
<table>
    <tr>
        <th>
            Operation
        </th>
        <th>
            Time Complexity
        </th>
        <th>
            Note
        </th>
    </tr>
    <tr>
        <td>
            Access
        </td>
        <td>
            O(1)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Push
        </td>
        <td>
            O(1)/O(n)
        </td>
        <td>
            Fixed-sized or No resizing required /  When resizing is required
        </td>
    </tr>
    <tr>
        <td>
            Pop
        </td>
        <td>
            O(1)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Update
        </td>
        <td>
            O(1)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Search
        </td>
        <td>
            O(n)
        </td>
        <td>
            -
        </td>
    </tr>
</table>

- **Linked List:**
<table>
    <tr>
        <th>
            Operation
        </th>
        <th>
            Time Complexity
        </th>
        <th>
            Note
        </th>
    </tr>
    <tr>
        <td>
            Access
        </td>
        <td>
            O(n)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Push
        </td>
        <td>
            O(1)
        </td>
        <td>
            At the Head
        </td>
    </tr>
    <tr>
        <td>
            Pop
        </td>
        <td>
            From the Head
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Update
        </td>
        <td>
            O(n)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Search
        </td>
        <td>
            O(n)
        </td>
        <td>
            -
        </td>
    </tr>
</table>

**Queue**

- **Array:**
<table>
    <tr>
        <th>
            Operation
        </th>
        <th>
            Time Complexity
        </th>
        <th>
            Note
        </th>
    </tr>
    <tr>
        <td>
            Access
        </td>
        <td>
            O(1)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Enqueue
        </td>
        <td>
            O(1)/O(n)
        </td>
        <td>
            Fixed-sized or No resizing required / When resizing required
        </td>
    </tr>
    <tr>
        <td>
            Dequeue
        </td>
        <td>
            O(1)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Update
        </td>
        <td>
            O(1)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Search
        </td>
        <td>
            O(n)
        </td>
        <td>
            -
        </td>
    </tr>
</table>

- **Linked List:**
<table>
    <tr>
        <th>
            Operation
        </th>
        <th>
            Time Complexity
        </th>
        <th>
            Note
        </th>
    </tr>
    <tr>
        <td>
            Access
        </td>
        <td>
            O(n)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Enqueue
        </td>
        <td>
            O(1)
        </td>
        <td>
            At the Tail
        </td>
    </tr>
    <tr>
        <td>
            Dequeue
        </td>
        <td>
            O(1)
        </td>
        <td>
            From the Head
        </td>
    </tr>
    <tr>
        <td>
            Update
        </td>
        <td>
            O(n)
        </td>
        <td>
            -
        </td>
    </tr>
    <tr>
        <td>
            Search
        </td>
        <td>
            O(n)
        </td>
        <td>
            -
        </td>
    </tr>
</table>

**Hash Table**

Average case for all basic operations on hash table is O(1) and Worst case if there are many collisions in Open Addressing or all elements hash into the same bucket in Chaining is O(n).

<hr style="border:2px solid gray">

## Sorting Algorithms


### Core Sorting Algorithms to Master

- Selection Sort <br>
[Pseudocode](./Algorithms/Sorting/Pseudocode/SelectionSort.md) [C++ code](./Algorithms/Sorting/C++-Code/selectionSort.cpp) [Python code](./Algorithms/Sorting/Python-Code/selectionSort.py) 

- Bubble Sort <br>
[Pseudocode](./Algorithms/Sorting/Pseudocode/bubbleSort.md) [C++ code](./Algorithms/Sorting/C++-Code/bubbleSort.cpp) [Python code](./Algorithms/Sorting/Python-Code/bubbleSort.py)

- Insertion Sort <br>
[Pseudocode](./Algorithms/Sorting/Pseudocode/insertionSort.md) [C++ code](./Algorithms/Sorting/C++-Code/insertionSort.cpp) [Python Code](./Algorithms/Sorting/Python-Code/insertionSort.py)

- Merge Sort <br>
[Pseudocode](./Algorithms/Sorting/Pseudocode/mergeSort.md) [C++ code](./Algorithms/Sorting/C++-Code/mergeSort.cpp) [Python Code](./Algorithms/Sorting/Python-Code/mergeSort.py)

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
- Binary Search <br>
[Python Code](./Algorithms/Sorting/binarySearch.py)
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

## Tree Traversal

- Pre Order
- In Order
- Post Order 