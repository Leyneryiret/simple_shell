#include "main.h"

int main()
{
  char *delim_args = " \t\r\n\v\f", *command_argv[50];
  char *linea = NULL, *args = NULL, *ruta = NULL, **env;
  size_t len = 0;
  int read = 0, i = 0, status;
  pid_t child_pid;
  
  while (1)
    {
      write(STDIN_FILENO, "($) ", 4);
      read = getline(&linea, &len, stdin);
    if (read == EOF)
      {
	free(linea), write(STDIN_FILENO, "\n", 1);
	return (0);
      }
    else if (_strncmp(linea, "exit\n", 4) == 0)
      {
	free(linea);
	return (0);
      }
    else
      {
	args = strtok(linea, delim_args);
	  while (args)
	    {
	      command_argv[i] = args; /* almacena el token en command_argv */
	      args = strtok(NULL, delim_args);
	      i++;
	    }
	  command_argv[i] = NULL;/* lo termino con NULL */
	  ruta = path(command_argv[0]);

	  get_each_command_argv(command_argv, linea);
	  child_pid = fork();
	  if (child_pid == -1)
	    return (0);
	  if (child_pid == 0)
	    {
	      if (execve(ruta, command_argv, env) == -1)
		{
		  free(ruta);
		  return (0);
		}
	    }
	  else
	    wait(&status);
      }
    }
  return (0);
}
