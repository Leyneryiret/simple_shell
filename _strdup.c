#include "main.h"
/**
 * _strdup - duplicates a string
 * @from: the string to be duplicated
 *
 * Return: ponter to the duplicated string
 */
char *_strdup(char *s)
{
  int i, len;
  char *dup_str;

  len = strlen(s) + 1;
  dup_str = malloc(sizeof(int) * len);
  i = 0;

  while (*(s + i) != '\0')
    {
      *(dup_str + i) = *(s + i);
      i++;
    }
  *(dup_str + i) = '\0';

  return (dup_str);
}
