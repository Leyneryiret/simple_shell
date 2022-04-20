#include "main.h"
/*
 * main - main entry point
 * Return: always 0
 */
int main(void)
{
	char *command_argv[50], **env = NULL;
	char *linea = NULL, *ruta = NULL;
	size_t len = 0;
	int read = 0, status = 0;
	pid_t child_pid;

	while (1)
	{
		write(STDIN_FILENO, "($) ", 4);
		read = getline(&linea, &len, stdin);
		if (read == EOF || _strncmp(linea, "exit\n", 4) == 0)
		{
			free(linea), write(STDIN_FILENO, "\n", 1);
			return (0);
		}
		else if (read > 1)
		{
			get_each_command_argv(command_argv, linea);
			if (access(command_argv[0], X_OK) == 0)
				ruta = _strdup(command_argv[0]);
			else
				ruta = path(command_argv[0]);
			if (!ruta)
				continue;
			child_pid = fork();
			if (child_pid == -1)
			{
				free(linea);
				free(ruta);
				return (0);
			}
			if (child_pid == 0)
			{
				if (execve(ruta, command_argv, env) == -1)
				{
					free(linea);
					free(ruta);
					return (0);
				}
			}
			else
			{
				free(ruta);
				wait(&status);
			}
		}

	}
	return (0);
}
