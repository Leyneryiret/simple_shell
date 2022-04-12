#include "main.h"

int main()
{
  char *input_buffer, *args, *delim_args = " \t\r\n\v\f", *command_argv[50];
  char *path_buff, *path_dup, *paths, *path_env_name, *path[50]; /* variables para otener PATH en path*/
  size_t b_size;
  int i = 0;
  
  b_size = 32;
  input_buffer = malloc(sizeof(char) * b_size);

  while (1)
	{
	  write(1, "$ ", 2);
	  if (getline(&input_buffer, &b_size, stdin) == EOF) /* Obtener o analizar la entrada del usuario */ 
	    break;
	  else
	    {
	      /* Identificar el comando y los argumentos del comando */
	      args = strtok(input_buffer, delim_args); /* almacena el token dentro del args */
	  while (args)
	    {
	      command_argv[i] = args; /* almacena el token en command_argv */
	      args = strtok(NULL, delim_args);
	      i++;
	    }
	  command_argv[i] = NULL;/* lo termino con NULL */
	    }
	  /* Encontrar el comando */
	  i = 0;
	  path_env_name = "PATH";
	  path_buff = getenv(path_env_name); /*obtener la variable del entorno PATH */
	  path_dup = _strdup(path_buff); /* una funcion para hacer copia */
	  paths = strtok(path_dup, ":"); /* tokenizo la copia */
	  while (paths)
	    {
	      path[i] = paths;
	      paths = strtok(NULL, ":");
	      i++;
	    }
	  path[i] = NULL; /* lo termino con NULL */
	



	  
	}
  return (0);
}
