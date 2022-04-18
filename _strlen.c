#include "main.h"
/**
 * _strlen - Calculate the length of a string
 * @string: string to be counted.
 * Return: number of bytes in the string.
 */
int _strlen(char *string)
{
  int counter = 0;

  while (*(string + counter))
    counter++;

  return (counter);
}
