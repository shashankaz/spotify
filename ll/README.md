Array is stored in contiguous memory location in heap memory.
In linked list, elements are stored in nodes, where each node contains a value and a reference (or pointer) to the next node in the sequence. This allows for efficient insertion and deletion of elements, as the nodes can be easily rearranged without the need for contiguous memory allocation. This is also in heap memory. It is also known as 1D linked list.

Where it is used?
- Implementing stacks and queues
- Adjacency lists for graph representation
- Dynamic memory allocation
- Browser history management

int x = 2;
int y = &x;
cout << y << endl; // This prints the address of x
cout << *y << endl; // This prints the value of x, which is 2

Storage used

32 bit System
int -> 4 bytes
pointer -> 4 bytes

64 bit System
int -> 4 bytes
pointer -> 8 bytes

If we add more integer value in each node the +4 bytes for each additional integer.