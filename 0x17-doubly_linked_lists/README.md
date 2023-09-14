# C - Doubly linked lists

### The General Objectives learnt in this project include;
- Understanding what a doubly linked list is
- How to use a doubly linked list

## Projects and Pseudocodes

### 0. Print list:
- A function that prints all the elements of a dlistint_t list
- returns the number of nodes

>create a variable to count the number of nodes
>
>check if head of doubly linked list is NULL/empty
>      if empty, exit the function
>
>while (the head is not empty/NULL)
>      print the head->value
>      move head to the next node
>      increment the node counter
>      (once the above loop fails)
>return the value of the node counter

### 1. List length:
- returns the number of elements in a dlistint_t doubly linked list

>size_t count_elem = 0;
>if (head is empty)
>   return count_elem;
>
>while (head is not null)
>      head = head->next;
>      count_elem++;
>return (count_elem);

### 2. Add node
- adds a new node at the beginning of a **dlistint_t**
- return the address of the new element, or *NULL* if it failed

```
dlistint_t new_node, *current;

new_node = malloc(sizeof(dlistint_t));
if new_node is null
   return (NULL);
new_node->n = n;
new_node->next = *head
new_node->prev = NULL;
current = *head

if current is not null
   while current is not null
   	   current = current->prev    
if current is not null
   current->prev = new_node
*head = new_node;
return (*head);
```