#include "main.h"
/**
 * _ruta - calculate command path
 * @command: is the command
 * Return: the command path
 */
char *_ruta(char *command)
{
	char *path_buff = NULL, *path_dup = NULL, *paths = NULL;
	char *command_path = NULL, *path[1250];
	int i = 0, j = 0;

	if (!command)
		return (NULL);
	path_buff = getenv("PATH");
	path_dup = _strdup(path_buff);
	paths = strtok(path_dup, ":");
	while (paths)
	{
		path[i] = paths;
		paths = strtok(NULL, ":");
		i++;
	}
	path[i] = NULL;
	command_path = malloc(sizeof(char) * 150);
	if (!command_path)
		return (NULL);
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
	free(command_path);
	free(path_dup);
	return (NULL);
}
