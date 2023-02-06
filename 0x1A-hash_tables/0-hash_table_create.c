#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of new hash table
 *
 * Return: new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size < 1)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(void *) * size);

	if (!new_table)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	return (new_table);
}
