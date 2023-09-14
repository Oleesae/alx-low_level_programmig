# C - Doubly linked lists

### The General Objectives learnt in this project include;
- Understanding what a doubly linked list is
- How to use a doubly linked list

## Projects and Pseudocodes

### 0. Print list:
- A function that prints all the elements of a dlistint_t list
- returns the number of nodes

create a variable to count the number of nodes

check if head of doubly linked list is NULL/empty
      if empty, exit the function

while (the head->next is not empty/NULL)
      print the head->value
      move head to the next node
      increment the node counter
(once the above loop fails)
return the value of the node counter