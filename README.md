# Mandalorian Simple Shell



### Project details
-----
Welcome to the `Mandalorian Simple Shell` project!! This program is a simple shell that can be compiled and launched from the command line.

### How to Compile
---------------
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh


### Syntax
-----
When using this shell, the syntax for running any command follows the familiar syntax when running a command in any other shell.


### Builtin Commands
-----
This shell supports a variety of commands:

`cd` - change directory

`env` - list the current environment variables

`exit` - exit the shell

```
MANDALORIAN$ help <builtin command>
```

### Compilation
-----
### Files
-----
Brief description of every file in this repository. Subject to change.

| File Name | Description |
| --- | --- |
| AUTHORS | Text file containing the contributing authors |
| main.c | Primary shell source code |
| main.h | Shell header file |
| _strcat.c | concatenates two strings and saves it to a blank string |
| *_strdup.c | duplicates a string |
| _strlen.c | Calculate the length of a string |
| _strncmp.c | function that compares two strings |
| get_each_command_argv | stores all the arguments of the input command to the list |
| man_1_simple_shell | Manual page for our simple shell program |
| ruta.c | calculate command path |
