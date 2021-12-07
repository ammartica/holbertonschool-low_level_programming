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
int execute_child(char **tokens);


/* function prototypes for built-ins */
int display_env(void);

/* function prototypes for string functions */
int _strlen(char *s);
int _strcmp(char *s1, char *s2);

#endif /*_MAIN_H_*/
