#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/*
 * key_index - gives the index of a key
 *
 * @key: The key
 * @size: Size of the array of the Hash Table
 *
 * Returns: The index at which the key/value pair
 * should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
