#include "main.h"

/**
 * _strcat - concatenates two strings and saves it to a blank string
 * @path: the path string
 * @command: the command
 * @command_path: the string to store the concatenation
 *
 * Return: Always void
 */
void _strcat(char *path, char *command, char *command_path)
{
int i, j;

i = 0;
j = 0;

while (*(path + i) != '\0')
{
*(command_path + i) = *(path + i);
i++;
}
*(command_path + i) = '/';
i++;

while (*(command + j) != '\0')
{
*(command_path + i) = *(command + j);
i++;
j++;
}
*(command_path + i) = '\0';
}
