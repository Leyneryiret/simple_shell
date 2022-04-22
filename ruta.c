#include "main.h"
/**
 * _ruta - calculate command path
 * @command: is the command
 * Return: the command path
 */
char *_ruta(char *command)
{
	char *path_buff = NULL, *path_dup = NULL, *paths = NULL;
	char *command_path = NULL, *path[1250], *existe = NULL;
	int i = 0, j = 0;

	path_buff = getenv("PATH");
	path_dup = _strdup(path_buff);
	paths = strtok(path_dup, ":");
	while (paths)
	{
		path[i] = paths;
		paths = strtok(NULL, ":"), i++;
	}
	path[i] = NULL;
	command_path = malloc(sizeof(char) * 1250);
	if (!command)
	{
		free(path_dup), free(command_path);
		return (NULL);
	}
	else if (access(command, X_OK) == 0)
	{
		existe = _strdup(command), free(path_dup), free(command_path);
		return (existe);
	}
	else
	{
		while (path[j] != NULL)
		{
			_strcat(path[j], command, command_path);
			if (access(command_path, X_OK) == 0)
			{
				free(path_dup);
				return (command_path);
			}
			j++;
		}
		free(path_dup), free(command_path);
		return (NULL);
	}
}
