#include <stdio.h>
#include <unistd.h>

void toast(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			printf("\\n");
		else if (str[i] == '\t')
			printf("\\t");
		else
			printf("%c", str[i]);
		str++;
	}
}

// wassup

int	main(void)
{
	// ayy lmao

	char *str = "#include <stdio.h>\n#include <unistd.h>\n\nvoid toast(char * str)\n{\n\tint i;\n\n\ti = 0;\n\twhile (str[i])\n\t{\n\t\tif (str[i] == '\\n')\n\t\t\tprintf(\"\\n\");\n\t\telse if (str[i] == '\\t')\n\t\t\tprintf(\"\\t\");\n\t\telse\n\t\t\tprintf(\"%c\", str[i]);\n\t\tstr++;\n\t}\n}\n\n// wassup\n\nint main(void)\n{\n\t// ayy lmao\n\n\tchar *str = \"\";\n\n\tprintf(\"%.*s\", 287, str);\n\ttoast(str);\n\tprintf(\"%s\", str + 287);\n\n\treturn (0);\n}";

	printf("%.*s", 287, str);
	toast(str);
	printf("%s", str + 287);

	return (0);
}