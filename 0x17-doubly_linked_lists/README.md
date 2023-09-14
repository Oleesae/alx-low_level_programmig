# C - Doubly linked lists

### The General Objectives learnt in this project include;
- Understanding what a doubly linked list is
- How to use a doubly linked list

## Projects and Pseudocodes

### [0. Print list](./0-print_dlistint.c)
- A function that prints all the elements of a dlistint_t list
- returns the number of nodes

```
create a variable to count the number of nodes

check if head of doubly linked list is NULL/empty
      if empty, exit the function

while (the head is not empty/NULL)
      print the head->value
      move head to the next node
      increment the node counter
      (once the above loop fails)
return the value of the node counter
```

### [1. List length](./1-dlistint_len.c)
- returns the number of elements in a dlistint_t doubly linked list

```
size_t count_elem = 0;
if (head is empty)
   return count_elem;

while (head is not null)
      head = head->next;
      count_elem++;
return (count_elem);
```

### [2. Add node](./2-add_dnodeint.c)
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
return (new_node);
```

### [3. Add node at the end](./3-add_dnodeint_end.c)
- adds a new node at the end of a dlistint_t list
- returns the address to the new element, or NULL if it failed

```
	create new_node (allocate memory)
	create temp

	check of new_node is not null
	new_node->n = n
	new_node->next = null
	temp = *head

	if temp is not null
	   while temp is not null
	   	 temp = temp->next

	if temp is not null
	   temp->next = new_node
	new_node->prev = temp
	return new_node
```

### [4. Free list](./4-freedlistint.c)
- frees a dlistint_t list
```
	if head is not null
	   while head is not null
	   	 head = head->prev

	temp = head
	while (temp is not null)
	      	head = head->next
		free(temp)
```

### [5. Get node at index](./5-get_dnodeint.c)
- returns the nth node of a dlistint_t linked list
- returns null if node doesn't exist

```
int count = 0

check the head of the linked list

while head is not null
      if count is equal to index
      	 break;
      head = head->next
      count++

return head;
```

### [6. Sum list](./6-sum_dlistint.c)
- returns the sum of all data (n) of a dlistint_t linked list

```
int sum = 0;

if head is null
   return null
while head->prev is not null
      head = head->prev

while head is not null
      n += head->n
      head = head->next

return sum
```