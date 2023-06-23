#include "variadic_functions.h"

/**
 * format_int - formats integer
 * @sep: the string separator
 * @ls: argument pointer
 */
void format_int(char *sep, va_list ls)
{
	printf("%s%d", sep, va_arg(ls, int));
}

/**
 * format_char - formats character
 * @sep: the string separator
 * @ls: pointer argument
 */
void format_char(char *sep, va_list ls)
{
	printf("%s%c", sep, va_arg(ls, int));
}

/**
 * format_string - formats string
 * @sep: the string separator
 * @ls: pointer argument
 */
void format_string(char *sep, va_list ls)
{
	char *str = va_arg(ls, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
	printf("%s%s", sep, str);
}

/**
 * format_float - formats float
 * @sep: the string separator
 * @ls: pointer argument
 */
void format_float(char *sep, va_list ls)
{
	printf("%s%f", sep, va_arg(ls, double));
}
/**
 * print_all - print char, integer, float and string
 *
 * @format: the format string
 */
void print_all(const char * const format, ...)
{
	char *sep = NULL;
	int d = 0, e;
	va_list ls;
	token_t tokens[] = {
		{"i", format_int},
		{"c", format_char},
		{"s", format_string},
		{"f", format_float},
		{NULL, NULL}
	};

	va_start(ls, format);
	while (format && format[d])
	{
		e = 0;
		while (tokens[e].token)
		{
			if (format[d] == tokens[e].token[0])
			{
				tokens[e].q(sep, ls);
				sep = ", ";
			}
			e++;
		}
		d++;
	}
	printf("\n");
	va_end(ls);
}
