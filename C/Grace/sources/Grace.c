#include <stdio.h>
#include <fnctl.h>
#define toast main
#define PRINT(fd, s, nl, t, g) (dprintf(fd, s, nl, t, g))
int toast()
{
    int fd = open("Grace_kid.c", O_WRONLY);
    PRINT(fd, "#include <stdio.h>%1$c#include <fcntl.h>%1$c#define toast main%1$c#define PRINT(fd, s) (dprintf(fd, s))%1$cint toast()%1$c{%1$c%2$cint fd = open(%3$cGrace_kid.c%3$c, O_WRONLY);%1$c%2$cPRINT", 10, 9, 34);
}

// fuck this shit