#include "main.h"
/**
 * path - calculate command path
 * @command: is the command
 * Return: the command path
 */
char *path(char *command)
{
char *path_buff = NULL, *path_dup = NULL, *paths = NULL;
char  *path_env_name = NULL, *command_path = NULL, *path[50];
int i, stat_f, j = 0;

i = 0;
path_env_name = "PATH";
path_buff = getenv(path_env_name);
path_dup = _strdup(path_buff);
paths = strtok(path_dup, ":");
while (paths)
{
path[i] = paths;
paths = strtok(NULL, ":");
i++;
}
path[i] = NULL;

command_path = malloc(sizeof(char) * 250);
while (path[j] != NULL)
{
_strcat(path[j], command, command_path);
stat_f = access(command_path, X_OK); /* and checks if it exists */
if (stat_f == 0)
{
free(path_dup);
return (command_path); /* returns the concatenated string if found */
}
j++;
}
free(path_dup);
return (command_path);
}
