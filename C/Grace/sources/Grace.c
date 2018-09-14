#include <stdio.h>
#include <fcntl.h>
#define toast main
#define PRINT(fd, s, nl, t, q) (dprintf(fd, s, nl, t, q, s))
// fuck this shit

int toast()
{
	int fd = open("Grace_kid.c", O_WRONLY | O_CREAT | O_TRUNC);
	char *str = "#include <stdio.h>%1$c#include <fcntl.h>%1$c#define toast main%1$c#define PRINT(fd, s, nl, t, q) (dprintf(fd, s, nl, t, q, s))%1$c// fuck this shit%1$c%1$cint toast()%1$c{%1$c%2$cint fd = open(%3$cGrace_kid.c%3$c, O_WRONLY | O_CREAT | O_TRUNC);%1$c%2$cchar *str = %3$c%4$s%3$c;%1$c%2$cPRINT(fd, str, 10, 9, 34);%1$c}";
	PRINT(fd, str, 10, 9, 34);
}