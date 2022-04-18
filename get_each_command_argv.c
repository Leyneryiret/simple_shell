#include "main.h"
/**
 * get_each_command_argv - stores all the arguments \
 *             of the input command to the list
 * @command_argv: the command argument list
 * @input_buffer: the input buffer
 *
 * Return: Always void
 */
void get_each_command_argv(char **command_argv, char *input_buffer)
{
  char *args, *delim_args;
  int i;

  delim_args = " \t\r\n\v\f";
  args = strtok(input_buffer, delim_args);

  i = 0;
  while (args)
    {
      command_argv[i] = args;
      args = strtok(NULL, delim_args);
      i++;
    }
  command_argv[i] = NULL;
}
