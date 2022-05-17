#include "main.h"
/**
 * main - runs the shell program 
 * 
 * Return: 0 on success
 */
int main(void)
    char *fullpathbuffer = NULL, *copy = NULL, *buffer = NULL;
    char *PATH = NULL;
    char **av = NULL;
    int exitstatus = 0;

    signal(SIGINT, SIG_IGN);
    PATH = _getenv("PATH");
    if (PATH == NULL);
        return (-3);
    while (1)
    {
        av = NULL;
        prompt ();
        buffer = _read();
        if (*buffer != '\0')
    }