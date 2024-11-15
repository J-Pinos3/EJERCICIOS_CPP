## Let's Talk About Double Linked List

### The Definitions
Is a type of list that allows us to go in both directions forward and reverse.
In a double linked list, in adittion to its element member, a node stores two pointers, a `next` link and a `prev` link.

In double Linked lists it's useful to add special nodes at both ends of the double linked list, a `header` node just before the head of the list and a `trailer` node just after the tail of the list.

These `sentinel` nodes do not store any value, just give quick access to first and last nodes of the list

In the singly linked list removing and element in a given position or at the tail of the list is not easy.

## Bibliography
- M. Goodrich, R. Tamassia, D. Mount, "Data Structures & Algorithms in C++", 2nd Edition.

- 