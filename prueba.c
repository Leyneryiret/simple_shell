#include "main.h"

int main()
{
  char *input_buffer, *args, *delim_args = " \t\r\n\v\f", *command_argv[50];
  char *ruta;
  size_t b_size;
  int i = 0;

  b_size = 250;

  input_buffer = malloc(sizeof(char) * b_size);
  if (!input_buffer)
    return 0;
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
	  ruta = path(command_argv[0]);
	  printf ("%s\n", ruta);
	}
      free(ruta);
    }
  free(input_buffer);
  return (0);
}
