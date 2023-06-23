#include "variadic_functions.h"

/**
 * print_all - print char, integer, float and string
 *
 * @format: format
 */
void print_all(const char * const format, ...)
{
	va_list yup;
	unsigned int v = 0, first = 0;
	char *w;

	va_start(yup, format);
	while (format && format[v] != '\0')
	{
		switch (format[v])
		{
			case 'c':
			switch (first)
			{ case 1: printf(", ");	}
			first = 1;
			printf("%c", va_arg(yup, int));
			break;
			case 'i':
			switch (first)
			{ case 1: printf(", "); }
			first = 1;
			printf("%i", va_arg(yup, int));
			break;
			case 'f':
			switch (first)
			{ case 1: printf(", "); }
			first = 1;
			printf("%f", va_arg(yup, double));
			break;
			case's':
			switch (first)
			case 1: printf(", "); }
			first = 1;
			w = va_arg(yup, char*);
			if (w)
			{ printf("%s", w);
			break; }
			printf("%p", w);
			break;
	v++;
	}
	printf("\n");
	va_end(yup);
}
