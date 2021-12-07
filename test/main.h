#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>

extern char **environ;

/* function prototypes */
char **tokenize_input(char *line);
char *read_line(void);
void prompt(void);
int execute_child(char **tokens, int stat);
char **_which(char *path);
char **find_path();


/* function prototypes for built-ins */
int display_env(void);

/* function prototypes for implementations */
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_getenv(const char *name);
char *_strdup(char *src);

#endif /*_MAIN_H_*/
