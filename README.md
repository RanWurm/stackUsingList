# Stack Implementation in C

## Overview
This repository contains a C implementation of a stack using a linked list. The stack supports basic operations such as `push`, `pop`, `peek`, and checks for `isEmpty`. Each node in the stack holds an integer, a character, a string, and a capacity that limits the stack size.

## Features
- **Create Node**: Dynamically creates a new node with specified data.
- **Add Node**: Pushes a node onto the stack if there's enough capacity.
- **Pop**: Removes the top element from the stack and returns it.
- **Peek**: Displays the top value of the stack without removing it.
- **isEmpty**: Checks if the stack is empty.
- **Size**: Returns the number of elements in the stack.
- **Capacity**: Returns the remaining capacity of the stack.
- **Destroy**: Frees all memory allocated to the stack.

## How It Works
The stack is implemented as a singly linked list where each node contains:
- `int x`: An integer value.
- `char y`: A character.
- `char* z`: A pointer to a character (string).
- `int capacity`: An integer indicating how many more elements can be added to the stack.
- `struct node* next`: Pointer to the next node in the stack.

## Compilation and Execution
To compile and run this stack implementation, you need a C compiler like GCC. Use the following commands in your terminal:

```bash
gcc -o stack main.c
./stack
Code Examples
Creating a Stack
c
Copy code
node* myStack = create(1, 'a', "hello", 10);  // Create a stack with initial capacity of 10
Adding Elements to the Stack
c
Copy code
addNode(&myStack, create(2, 'b', "world", 10));  // Push new element onto the stack
Popping Elements from the Stack
c
Copy code
node* poppedNode = pop(&myStack);  // Pop the top element from the stack
Checking Stack Properties
c
Copy code
if (!isEmpty(myStack)) {
    printf("Top of the stack: %d, %c, %s\n", myStack->x, myStack->y, myStack->z);
}
printf("Current stack size: %d\n", size(myStack));
printf("Current stack capacity: %d\n", capacity(myStack));
Destroying the Stack
c
Copy code
destroy(&myStack);  // Free all memory used by the stack
License
This project is open source and available under the MIT License.

Contact
Feel free to contact me at [RanWurembrand@gmail.com] if you have any questions or contributions to the project.
