#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
	int i = 5;
	if (i <= 0)
		return 0;
	char name[512];
	char exec[512];
	char cmd[512];
	#ifdef start
		i--;
	#endif
	sprintf(exec, "Sully_%d", i);
	sprintf(name, "%s.c", exec);
	int fd = open(name, O_CREAT | O_WRONLY | O_TRUNC, 00700);
	if (fd < 0)
		return (0);
	char *str = "#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <stdlib.h>%1$c%1$cint main()%1$c{%1$c%3$cint i = %5$d;%1$c%3$cif (i <= 0)%1$c%3$c%3$creturn 0;%1$c%3$cchar name[512];%1$c%3$cchar exec[512];%1$c%3$cchar cmd[512];%1$c%3$c#ifdef start%1$c%3$c%3$ci--;%1$c%3$c#endif%1$c%3$csprintf(exec, %2$cSully_%%d%2$c, i);%1$c%3$csprintf(name, %2$c%%s.c%2$c, exec);%1$c%3$cint fd = open(name, O_CREAT | O_WRONLY | O_TRUNC, 00700);%1$c%3$cif (fd < 0)%1$c%3$c%3$creturn (0);%1$c%3$cchar *str = %2$c%4$s%2$c;%1$c%3$cdprintf(fd, str, 10, 34, 9, str, i);%1$c%3$csprintf(cmd, %2$cgcc -D start -Wall -Wextra -Werror -o %%1$s %%2$s && ./%%1$s%2$c, exec, name);%1$c%3$csystem(cmd);%1$c}";
	dprintf(fd, str, 10, 34, 9, str, i);
	sprintf(cmd, "gcc -D start -Wall -Wextra -Werror -o %1$s %2$s && ./%1$s", exec, name);
	system(cmd);
}