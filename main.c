#include "main.h"
/**
 * main - my simplle shell
 * Return: always 0
 */
int main(void)
{
	char *command_argv[2000], **env = NULL, *linea = NULL, *ruta = NULL;
	size_t len = 0;
	int interactive = 1, read = 0, status = 0;
	pid_t child_pid;

	isatty(STDIN_FILENO) == 0 ? interactive = 0 : interactive;
	while (1)
	{
		interactive == 1 ? write(STDIN_FILENO, "($) ", 4) : interactive;
		read = getline(&linea, &len, stdin);
		if (read == EOF || _strncmp(linea, "exit\n", 4) == 0)
		{
			free(linea), write(STDIN_FILENO, "\n", 1);
			return (0);
		}
		else if (read > 1)
		{
			get_each_command_argv(command_argv, linea);
			ruta = _ruta(command_argv[0]);
			if (!ruta)
				continue;
			else
			{
				child_pid = fork();
				if (child_pid == -1)
					return (0);
				if (child_pid == 0)
				{
					if (execve(ruta, command_argv, env) == -1)
						return (0);
				}
				else
				{
					free(ruta), wait(&status);
				}
			}
		}
	}
	free(linea);
	return (0);
}
