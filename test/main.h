#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

/* function prototypes */
char **tokenize_input(char *line);
char *read_line(void);
void prompt(void);

/* function prototypes for built-ins */
int ex(void);
int display_env(void);
int execute_builtins(char **tokens);

/* function prototypes for functions */
int _strlen(char *s);
int _strcmp(char *s1, char *s2);

/* structure for function pointers to implement built-ins */
typedef struct built_ins
{
  char *n;
  int (*f)(void);
} bi;

#endif /*_MAIN_H_*/
