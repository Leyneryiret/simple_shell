#include "main.h"

int main()
{
  char *input_buffer, *args, *delim_args, *command_argv[50];
  size_t b_size;
  int i = 0;
  
  b_size = 32;
  input_buffer = malloc(sizeof(char) * b_size);

  while (1)
	{
	  write(1, "$ ", 2);
	  if (getline(&input_buffer, &b_size, stdin) != 0)
	    {
	    //Identificar el comando y los argumentos del comando//
	  delim_args = " \t\r\n\v\f"; // los delimitadores
	  args = strtok(input_buffer, delim_args); // almacena el token dentro del args
	  while (args)
	    {
	      command_argv[i] = args; // añmacena el token en command_argv
	      args = strtok(NULL, delim_args);
	      i++;
	    }
	  command_argv[i] = NULL;
	  break;
	    }
	}
  return (0);
}
