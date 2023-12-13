#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/* key_index - gives the indes of a key
 *
 * @key: The key
 * @size: Size of the array of the Hash Table
 *
 * Returns: The index at which the key/value pair
 * should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int i;
        unsigned long int ascii_sum = 0, key_index;

	for (i = 0; key[i] != '\0'; i++)
		ascii_sum += key[i];

	key_index = ascii_sum % size;

        return key_index;
}
