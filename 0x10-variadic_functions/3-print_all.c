#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
void print_string(va_list s)
{
	char *out = va_arg(s, char *);

	if (out == NULL)
	{
		printf("(nil)");
	}
	printf("%s", out);

}

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int j = 0;
	char *separador = "";

	impresion valores[] ={

		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"f", print_float},
		{NULL, NULL}

	};

	va_start(ap, format);



	while (format && format[i])
	{
		j = 0;
		while (valores[j].t != NULL)
		{
			if (*(valores[j].t) == format[i])
			{
				printf("%s", separador);
				valores[j].f(ap);
				separador = ", ";
				break;
			}
			j++;
		}
		i++;

	}
	printf("\n");
	va_end(ap);

}
