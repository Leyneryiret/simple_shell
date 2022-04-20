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


## Requirements

------------

- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to.

------------

## Installation:

------------

To use our shell you must follow these steps.
1 - To clone the repository use this command where you want to save the repository:https://github.com/Leyneryiret/simple_shell.git
2 - To compile the code in your console (local Terminal) or in your sandbox, access the local repository location and use this command: 

``gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh``

3 - Type in your console " ./hsh", and you will be running the code showing the promt.
4 - To terminate program execution or close the shell: press Ctrl + D or type in the prompt "Exit".

------------

## Examples:

------------


Commands such as: ls and its derivatives, pwd, cat and echo.
### Ls:
```c

                     ls
                     
AUTHORS    _strcat.c  _strlen.c   get_each_command_argv.c  main.h              prueba.c
README.md  _strdup.c  _strncmp.c  hsh                      man_1_simple_shell  ruta.c


                         ls -ls
total 68
 0 -rw-r--r-- 1 Stewardvr Stewardvr   167 Apr 12 15:33 AUTHORS
 4 -rw-r--r-- 1 Stewardvr Stewardvr  2329 Apr 12 15:32 README.md
 0 -rw-r--r-- 1 Stewardvr Stewardvr   535 Apr 20 11:06 _strcat.c
 0 -rw-r--r-- 1 Stewardvr Stewardvr   374 Apr 20 11:06 _strdup.c
 0 -rw-r--r-- 1 Stewardvr Stewardvr   253 Apr 20 11:06 _strlen.c
 0 -rw-r--r-- 1 Stewardvr Stewardvr   357 Apr 20 11:06 _strncmp.c
 4 -rw-r--r-- 1 Stewardvr Stewardvr   545 Apr 20 11:06 get_each_command_argv.c
48 -rwxr-xr-x 1 Stewardvr Stewardvr 31616 Apr 20 11:06 hsh
 0 -rw-r--r-- 1 Stewardvr Stewardvr   551 Apr 20 11:06 main.h
 4 -rw-r--r-- 1 Stewardvr Stewardvr  1570 Apr 12 15:35 man_1_simple_shell
 4 -rw-r--r-- 1 Stewardvr Stewardvr   871 Apr 20 11:06 prueba.c
 4 -rw-r--r-- 1 Stewardvr Stewardvr   829 Apr 20 11:06 ruta.c
root@DESKTOP-4PQEFSI:~/simple_shell#
```

### pwd:
```c
:D : pwd
/home/vagrant/simple_shell/simple_shell
```
### cat (file.c):
```c
:D : cat prompt.c
#include "shell.h"
/**
 * prompt - prints promp
 *
 * Return: Always 0.
 */

void prompt(void)
{
        char *promt = ":D : ";

        if (isatty(STDIN_FILENO) == 1)
                write(STDOUT_FILENO, promt, getstringlen(promt));
}
```
### echo (word):
```c
:D : echo I have the flu :(
I have the flu :(
```

------------

Commands such as: ls and pwd by entering the full path.

------------


### Ls:
```c
:D : /bin/ls
 AUTHORS    builtin.c    functions.c  main.c              path.c    shell.h
README.md  execution.c  hsh          man_1_simple_shell  prompt.c  spaces.c
```
### pwd:
```c
:D : /bin/pwd
/home/vagrant/simple_shell/simple_shell
```
------------


## Special commands:

------------

    Ctrl + D : Exits Shell.

    Ctrl + C : To prevent the shell from closing.


## Flowchart:
First, a flowchart was generated which contains data input, cycles, functions, structures and with which the logic was based to generate the source code of our function.
