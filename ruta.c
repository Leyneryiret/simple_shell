#include "main.h"

char *path(char *command)
{
  char *path_buff, *path_dup, *paths, *path_env_name, *command_path, *path[50];
  int i, stat_f, j = 0;

  i = 0;
  path_env_name = "PATH";
  path_buff = getenv(path_env_name); /* get the variable of PATH environment */
  path_dup = _strdup(path_buff); /* esta funcion duplica */
  paths = strtok(path_dup, ":"); /* tokenizes it */
  while (paths)
    {
      path[i] = paths;
      paths = strtok(NULL, ":");
      i++;
    }
  path[i] = NULL; /* terminates it with NULL */

  command_path = malloc(sizeof(char) * 250);
  while (path[j] != NULL)
    {
      _strcat(path[j], command, command_path); /* this function is found below */
      stat_f = access(command_path, X_OK); /* and checks if it exists */
      if (stat_f == 0)
	return (command_path); /* returns the concatenated string if found */
      j++;
    }
  command_path = "error";
  free(path_dup);
  return (command_path);
}
