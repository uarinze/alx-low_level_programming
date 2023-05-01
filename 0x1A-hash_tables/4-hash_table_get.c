#include "hash_tables.h"
/**
 * hash_table_get - retirves a value associated with a key
 * @ht: the hash table that contaoins the key/value pair
 * @key: the key to retriev its value
 *
 * Return: the value associated with the key
 * or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	unsigned long int index = key_indey((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key != 0))
		node = node->next;
	if (node == NULL)
		return (NULL);
	else
		return (node->value);
}
