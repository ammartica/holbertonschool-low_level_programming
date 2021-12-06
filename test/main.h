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

/* function prototypes for built-ins */
void ex(void);
void display_env(void);
void execute_builtins(char **tokens);

/* function prototypes for functions */
void execute_builtins(char **tokens);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);

/* structure for function pointers to implement built-ins */
typedef struct built_ins
{
  char *n;
  void (*f)(void);
} bi;

#endif /*_MAIN_H_*/
