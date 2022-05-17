#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stddef.h>
#include <sys/wait.h>
#include <errno.h>
#define TOKENS_BUFFER_SIZE 64
#define LINE_SIZE 1024
#define TOKEN_DELIMITERS " \t\r\n\a"
extern char **environ;

typedef struct builtins
{
    char *arg;
    void (*builtin)(char **args, char *line, char **evn);
}
builtins_t;
void shell(int ac, char **av, char **env);
char *_getline(void);
char **split_line(char *line);
int execute_prog(char **args, char *line, char **env, int flow);
int check_for_builtins(char **args, char *line, char **env);
int launch_prog(char **args);
int bridge(char *check, char **args);
char *_strstr(char *haystack, char *needle);
char *save_path(char *args, char *tmp, char *er);
int _strlen(char *s);
int builtins_checker(char **args);
char *search_cwd(char *filename, char *er);
void exit_shell(char **args, char *line, char **env);
char read_dir(char *er, struct dirent *s, char *fi, int l, char *p, char *t);
void prompt(void);
char get_env(char *env);
void env_shell(char **args, char *line, char **env);
int _strcmp(cahr *s1, char *s2);
char *find_path(char *args, char *tmp, char *er);

#endif 