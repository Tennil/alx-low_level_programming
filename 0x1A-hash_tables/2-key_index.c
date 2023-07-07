#include "hash_tables.h"

/**
 * key_index - function that returns the index to place an item in the hasht
 * @key: the items to be placed
 * @size: size of the array of hash table
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
