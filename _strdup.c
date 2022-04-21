#include "main.h"
/**
 * _strdup - duplicates a string
 * @s: the string to be duplicated
 *
 * Return: ponter to the duplicated string
 */
char *_strdup(char *s)
{
	int i = 0, len = 0;
	char *dup_str = NULL;

	len = _strlen(s) + 1;

	dup_str = malloc(sizeof(int) * len);

	while (*(s + i) != '\0')
	{
		*(dup_str + i) = *(s + i);
		i++;
	}
	*(dup_str + i) = '\0';

	return (dup_str);
}
