#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
	int	fd = open("Sully_5.c", O_CREAT | O_WRONLY | O_TRUNC, 00700);
	char * str = "#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <stdlib.h>%1$c%1$cint main(int argc, char **argv)%1$c{%1$c%3$c(void)argc;%1$c%3$cif (argv[0][8] == '0')%1$c%3$c%3$creturn(0);%1$c%3$cint i = %5$d;%1$c%3$cchar name[10] = %2$cSully_x.c%2$c;%1$c%3$cname[6] = argv[0][8] - 1;%1$c%3$cint fd = open(name, O_CREAT | O_WRONLY | O_TRUNC, 00700);%1$c%3$cchar *str = %2$c%4$s%2$c;%1$c%3$cdprintf(fd, str, 10, 34, 9, str, i - 1);%1$c%3$cchar cmd[128];%1$c%3$csprintf(cmd, %2$cgcc -Wall -Wextra -Werror -o %%.7s %%s%2$c, name, name);%1$c%3$csystem(cmd);%1$c%3$csprintf(cmd, %2$c./%%.7s%2$c, name);%1$c%3$csystem(cmd);%1$c}";
	dprintf(fd, str, 10, 34, 9, str, 5);
	system("gcc -Wall -Wextra -Werror -o Sully_5 Sully_5.c && ./Sully_5");
}