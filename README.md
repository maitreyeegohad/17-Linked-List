# Linked-List
## Overview

This repository contains an implementation of a **Singly Linked List** in C++. A linked list is a linear data structure in which elements, called nodes, are stored in a non-contiguous manner. Each node contains two components:
- **Data**: The value stored in the node.
- **Next Pointer**: A reference to the next node in the sequence.

Unlike arrays, linked lists allow for dynamic memory allocation, making them more efficient for insertions and deletions.

## Advantages of Singly Linked Lists:
- **Dynamic Size:** Unlike arrays, linked lists do not have a fixed size. You can add or remove nodes without worrying about the need for reallocation or exceeding a predetermined capacity.
- **Efficient Insertions and Deletions:** Insertions and deletions in a linked list, especially at the beginning or end, are more efficient as they do not require shifting elements (like in arrays). Instead, the next pointers are simply updated.
- **Memory Utilization:** Since memory is allocated dynamically, a linked list uses memory more efficiently, especially when the number of elements is not known in advance. No memory is wasted as unused space, unlike arrays.
- **Ease of Implementation for Stacks and Queues:** Linked lists provide a simple way to implement stacks, queues, and other data structures where the size can dynamically change and elements can be added or removed frequently.

## Disadvantages of Singly Linked Lists:
- **Extra Memory for Pointers:** Each node in a singly linked list requires extra memory to store the next pointer, which adds overhead compared to arrays where only the data is stored.
- **No Direct Access to Elements:** In an array, you can directly access an element using its index, but in a linked list, you must traverse the list starting from the head node to access an element, making random access inefficient (O(n)).
- **Cache Unfriendliness:** Linked lists do not have contiguous memory, meaning they do not make efficient use of the CPU cache, which is optimized for sequential data access. This can lead to slower performance in cases where cache locality is important.

## Linked List Operations

### 1. Regular Linked List Implementation

**Description:**

In a singly linked list, each node points to the next node in the sequence, and the last node points to `nullptr`, indicating the end of the list. This structure allows for efficient memory utilization and flexible size management.

**Basic Operations Supported:**
- **Insertion**: Adding nodes at the beginning or end of the list.
- **Traversal**: Accessing nodes sequentially.
- **Deletion**: Removing nodes from specific positions.
- **Searching**: Finding nodes containing specific values.

### Algorithm for Regular Linked List Implementation:

1. **Creating a Node:**
   - Allocate memory for a new node.
   - Set the node's `data` to the desired value.
   - Initialize the `next` pointer to `nullptr`.

2. **Insert at Start:**
   - Create a new node.
   - Point the new node's `next` to the current head.
   - Update the head to be the new node.

3. **Insert at End:**
   - Create a new node.
   - If the list is empty, set the head to the new node.
   - Otherwise, traverse to the last node and set its `next` to the new node.

4. **Traverse the List:**
   - Start from the head and follow the `next` pointers to access each node until `nullptr` is reached.

### 2. Addition of a Node at the End

**Description:**

To add a node at the end of the linked list, the algorithm follows these steps:

**Algorithm for Adding a Node at the End:**

1. **Create a New Node:**
   - Allocate memory and assign the value to the new node.

2. **Check if the List is Empty:**
   - If the list is empty (`head` is `nullptr`), set the head to the new node.

3. **Traverse to the End:**
   - Start at the head and continue to the next node until the last node (where `next` is `nullptr`) is found.

4. **Link the New Node:**
   - Set the `next` pointer of the last node to the new node.

### 3. Addition of a Node at the Start

**Description:**

To add a node at the start of the linked list, the algorithm follows these steps:

**Algorithm for Adding a Node at the Start:**

1. **Create a New Node:**
   - Allocate memory and assign the value to the new node.

2. **Link to the Current Head:**
   - Set the new node's `next` pointer to the current head.

3. **Update the Head:**
   - Set the head to the new node, effectively making it the first node in the list.
