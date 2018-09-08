#include <stdio.h>

/*
** yo wassup
*/

void toast(void) {};

int main(void)
{
	/* ayy lmao */
	char *str = "#include <stdio.h>%1$c%1$c/*%1$c** yo wassup%1$c*/%1$c%1$cvoid toast(void) {};%1$c%1$cint main(void)%1$c{%1$c%2$c/* ayy lmao */%1$c%2$cchar *str = %3$c%4$s%3$c;%1$c%2$cprintf(str, 10, 9, 34, str);%1$c}%1$c";
	printf(str, 10, 9, 34, str);
}
