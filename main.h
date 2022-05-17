#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
/*include <sys/wait.h> */
#include <string.h>
#include <signal.h>
#include <fcntl.h>

extern char **environ;

/* PATH Shell Functions */

/* String Helper*/
char *_strdup(char *str);
int _splitstring(char *str);

/* Tokenize and PATH Helper Functions*/
char _splitPATH(char *str);

/* Program */
int *_read(void);
char *fullpathbuffer(char **av, char *PATH, char *copy);
int checkbuiltins(char **av, char *buffer, int exitstatus);

#endif 